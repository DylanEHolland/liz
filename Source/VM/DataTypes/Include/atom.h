/**
 * @file base_type.h
 * @author Dylan E. Holland (salinson1138@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-03-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#pragma once
#include <string>

using namespace std;

namespace liz::vm::dataTypes {
    /**
     * The base type is similar to python and
     * lisp combined.  The base type is like the
     * atom, but everything is a pointer.
     */
    class atom {
        public:
            atom();
            string str();
        private:
            int id;
            void *data;
    };
}
