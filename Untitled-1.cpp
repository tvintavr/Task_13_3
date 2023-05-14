#include <iostream>
#include <vector>
#include <cassert>

int main() {
    std::vector<int> db(0);
    int num=0;
    int index=0;

        std::cout<<"input: ";
        std::cin>>num;
        assert(!std::cin.fail());
    
    while (num!=-1) {
        if (db.size()<20) {
            db.resize(db.size()+1);
        }
        db[index]=num;
        index++;
        if (index>19) {
            index=0;
        }
        std::cin>>num;
    }
    
    std::cout<<"output: ";
    for (int i=0;i<db.size();i++) {
        std::cout<<db[i]<<" ";
    }

}