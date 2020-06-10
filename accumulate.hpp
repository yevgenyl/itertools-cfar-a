#pragma once

namespace itertools{
    class accumulate{
        private:
        int start,finish;
        public:
            template <typename T> accumulate(T): start(0), finish(0){}
            template <typename T1, typename T2> accumulate(T1,T2): start(0), finish(0){}
        int* begin(){
            return nullptr;
        }
        int* end(){
            return nullptr;
        }
    };
}