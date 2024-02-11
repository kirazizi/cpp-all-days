/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 21:58:37 by sbzizal           #+#    #+#             */
/*   Updated: 2024/02/04 16:48:10 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool find_vct(std::deque<int> &res, int n) {
    for (size_t i = 0; i < res.size(); i++) {
        if (res[i] == n) {
            return true;
        }
    }
    return false;
}

void compair_index(std::deque<int> &main, std::deque<int> &pend, std::deque<int> &jac){
    std::deque<int> result;
    std::deque<int> index;

    for(size_t i = 0; i < pend.size(); i++) {
        index.push_back(i);
    }

    for(size_t i = 0; i < jac.size(); i++) {
    
        for(int j = 0; j < (int)index.size(); j++) {

            if (index[j] == jac[i] && find_vct(result, index[j]) == false){
                result.push_back(index[j]);
                index[j] = -1;
                j--;
                while (j >= 0 && index[j] != -1) {
                    result.push_back(index[j]);
                    index[j] = -1;
                    j--;
                }
            }
        }
    }
    for (size_t i = 0; i < index.size(); i++) {
        if (index[i] != -1) {
            result.push_back(index[i]);
        }
    }

    std::deque<int> new_pend;
    for (size_t i = 0; i < result.size(); i++) {
        new_pend.push_back(pend[result[i]]);
    }
    std::deque<int>::iterator it;
    main.insert(main.begin(), new_pend.front());
    for (size_t i = 1; i < new_pend.size(); i++) {
        it = std::lower_bound(main.begin(), main.end(), new_pend[i]);
        main.insert(it, new_pend[i]);
    }
}

void Pmerge_sort(std::deque<std::pair<int, int> > &pair){
    if (pair.size() <= 1){
        return;
    }
    
    std::deque<std::pair<int, int> > left;
    std::deque<std::pair<int, int> > right;
    
    for (size_t i = 0; i < pair.size(); i++){
        if (i < pair.size() / 2){
            left.push_back(pair[i]);
        } else {
            right.push_back(pair[i]);
        }
    }
    
    Pmerge_sort(left);
    Pmerge_sort(right);
    
    size_t lf = 0, rt = 0, i = 0;
    
    while(lf < left.size() && rt < right.size()){
        if (left[lf].first < right[rt].first){
            pair[i++] = left[lf++];
        }
        else
            pair[i++] = right[rt++];
    }
    
    while(lf < left.size()){
        pair[i++] = left[lf++];
    }
    while(rt < right.size()){
        pair[i++] = right[rt++];
    }
}

int PmergeMe_deq::main_deque(int ac, char **av){
    clock_t start = clock();
    int i = 1;
    while(av[i]){
        if (!check_value(av[i])){
            return 1;
        }
        this->input_deq.push_back(std::stoi(av[i]));
        i++;
    }
    

    if (this->input_deq.size() < 2){
        clock_t en = clock();
        double dur = static_cast<double>(en - start) / CLOCKS_PER_SEC * 1e6;
        std::cout << "Time to process a range of << " << ac -1 << " elements with std::vector: " << dur << " us" << std::endl;
        return 0;
    }

    int end_number;
    int flg = 0;
    if (this->input_deq.size() % 2 != 0){
        end_number = this->input_deq.back();
        flg = 1;
        this->input_deq.pop_back();
    }

    std::pair<int, int> p[this->input_deq.size()];
    std::deque<std::pair<int, int> > pairs;
    
    size_t f = 0, j = 0;
    
    while(f < this->input_deq.size()){
        p[j].first = this->input_deq[f++];
        p[j].second = this->input_deq[f++];
        if (p[j].second > p[j].first){
            std::swap(p[j].first, p[j].second);
        }
        pairs.push_back(p[j]);
        j++;
    }
    
    Pmerge_sort(pairs);
    
    std::deque<int> main;
    std::deque<int> pend;
    
    for (size_t i = 0; i < pairs.size(); i++) {
        main.push_back(pairs[i].first);
        pend.push_back(pairs[i].second);
    }
    
    std::deque<int> jac_nb;
    
    for (size_t i = 0; i < pend.size(); i++) {
        size_t jac = jacobsthal(i);
        if (jac > pend.size()) break;
        jac_nb.push_back(jac);
    }
    compair_index(main, pend, jac_nb);
    if (flg){
        std::deque<int>::iterator it;
        it = std::lower_bound(main.begin(), main.end(), end_number);
        main.insert(it, end_number);
    }
    
    clock_t end = clock();
    double duration = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1e6;
    std::cout << "Time to process a range of " << ac -1 << " elements with std::deque : " << duration << " us" << std::endl;
    return 0;
}