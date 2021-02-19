#include <vector>
#include <iostream>

int main(int argc, char const *argv[]) {
    std::vector<unsigned long>l;

    for (unsigned long i = 2; i<100000; i++){
        l.push_back(i);
    }

    for(auto i=0; i<l.size(); i++){
        auto tmp = l.at(i);
        for (auto it = l.begin(); it!=l.end();){
            if(tmp!=*it && *it % tmp ==0){
                it = l.erase(it);
            } else {
                ++it;
            }
        }
    }

    // for(int i= 0; i<l.size(); i++) {
    //     if(l.at(i)==-1){
    //         l.erase(l.begin()+i);
    //     }
    // }

    std::cout << l.size() << '\n';

    return 0;
}
