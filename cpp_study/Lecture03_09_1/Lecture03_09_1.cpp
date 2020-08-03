#include <iostream>
#include <bitset>

int main()
{
    using namespace std;

    unsigned char option_viewed     = 0x01;
    unsigned char option_edited     = 0x02;
    unsigned char option_liked      = 0x04;
    unsigned char option_shared     = 0x08;
    unsigned char option_deleted    = 0x80;

    cout << bitset<8>(option_viewed) << endl;
    cout << bitset<8>(option_edited) << endl;
    cout << bitset<8>(option_liked) << endl;
    cout << bitset<8>(option_shared) << endl;
    cout << bitset<8>(option_deleted) << endl;

    unsigned char my_article_flags = 0;

    //기사를 봤을 때
    my_article_flags |= option_viewed;
    cout << bitset<8>(my_article_flags) << endl;

    //기사의 좋아요를 클릭했을 때
    my_article_flags |= option_liked;
    cout << bitset<8>(my_article_flags) << endl;


    // 기사의 좋아요를 다시 클릭했을 때
    my_article_flags &= ~option_liked;
    cout << bitset<8>(my_article_flags) << endl;

    // 본 기사만 삭제할 때
    if(my_article_flags & option_viewed)
        my_article_flags |= option_deleted;
    cout << bitset<8>(my_article_flags) << endl;



    return 0;
}
