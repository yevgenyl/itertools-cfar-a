#pragma once

namespace itertools{
    class range{
        private:
        int start,finish;
        public:
            range(int a, int b): start(a), finish(b){}
        int* begin(){
            return nullptr;
        }
        int* end(){
            return nullptr;
        }
    };
}
