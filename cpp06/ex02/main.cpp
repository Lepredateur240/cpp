/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masenche <masenche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 17:32:54 by masenche          #+#    #+#             */
/*   Updated: 2026/05/18 17:32:55 by masenche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void) {
    int r = std::rand() % 3;
    if (r == 0) {
        std::cout << "Generated: A" << std::endl;
        return new A();
    } else if (r == 1) {
        std::cout << "Generated: B" << std::endl;
        return new B();
    } else {
        std::cout << "Generated: C" << std::endl;
        return new C();
    }
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknown" << std::endl;
}

void identify(Base& p) {
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return;
    } catch (...) {}

    try {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return;
    } catch (...) {}

    try {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return;
    } catch (...) {}
    
    std::cout << "Unknown" << std::endl;
}

int main() {
    std::srand(std::time(0));

    std::cout << "--- Testing identify(Base*) ---" << std::endl;
    for (int i = 0; i < 5; ++i) {
        Base* ptr = generate();
        std::cout << "Identified: ";
        identify(ptr);
        delete ptr;
    }

    std::cout << "\n--- Testing identify(Base&) ---" << std::endl;
    for (int i = 0; i < 5; ++i) {
        Base* ptr = generate();
        std::cout << "Identified: ";
        identify(*ptr);
        delete ptr;
    }

    return 0;
}
