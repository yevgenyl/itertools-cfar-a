#pragma once

namespace itertools{
    class compress{
        private:
        int start,finish;
        public:
            template <typename T1, typename T2> compress(T1,T2): start(0), finish(0){}
        int* begin(){
            return nullptr;
        }
        int* end(){
            return nullptr;
        }
    };
}