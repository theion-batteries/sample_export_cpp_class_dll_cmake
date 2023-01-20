#include "class.h"

int main()
{
    // shared ptr
    auto objS = GetInterfaceSharedPtr();
    objS=std::make_shared<DerivedA>();
    objS->add(1,2);
    objS->getSum();
    objS=std::make_shared<DerivedB>();
    objS->add(1,3);
    objS->getSum();
    // unqiue ptr
    std::cout<<"unique"<<std::endl;
    auto objU = GetInterfaceUniquePtr();
    objU=std::make_unique<DerivedA>();
    objU->add(1,2);
    objU->getSum();
    objU=std::make_unique<DerivedB>();
    objU->add(1,3);
    objU->getSum();

    return 0;
}