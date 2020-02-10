//Object relationships

#include <iostream>

using namespace std;

int main()
{
    //Composition(구성(요소)):Part-of       두뇌는 육체의 일부이다            (주어:member 변수, 목적어:class)   전체/부품       다른 class에 속할 수 없다    member의 존재를 class가 관리o     방향성:단방향
    //Aggregation(집합):      Has-a         어떤 사람이 자동차를 가지고 있다  (주어:class, 목적어:member)        전체/부품       다른 class에 속할 수 있다    member의 존재를 class가 관리x     방향성:단방향
    //Association(연계,제휴): Uses-a        환자는 의사의 치료를 받는다                                         용도 외엔 무관   다른 class에 속할 수 있다    member의 존재를 class가 관리x    방향성:단방향 or 양방향
    //                                      의사는 환자들로부터 치료비를 받는다                                 
    //Dependency(의존):       Depends-on    나는 (다리가 부러져서 한 달 동안) 목발을 짚었다                      용도 외엔 무관   다른 class에 속할 수 있다    member의 존재를 class가 관리o    방향성:단방향

    return 0;
}
