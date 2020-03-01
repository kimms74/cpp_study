#include <iostream>
#include <bitset>

int main()
{
    using namespace std;

    //bool item1_flag = false;
    //bool item2_flag = false;
    //bool item3_flag = false;
    //bool item4_flag = false;

    //// event!
    //item2_flag = true;

    //// die! item2 los
    //item2_flag = false;

    //if (item3_flag == true)
    //{
    //    // event 문을 통과
    //}

    //if (item3_flag == true)
    //{
    //    item3_flag = false;
    //    item4_flag = true;
    //}



    //bit flag

    //const unsigned char opt0 = 1 << 0;
    //const unsigned char opt1 = 1 << 1;
    //const unsigned char opt2 = 1 << 2;
    //const unsigned char opt3 = 1 << 3;

    //cout << bitset<8>(opt0) << endl;
    //cout << bitset<8>(opt1) << endl;
    //cout << bitset<8>(opt2) << endl;
    //cout << bitset<8>(opt3) << endl;


    //unsigned char items_flag = 0;

    //cout << "No item0 obtained " << bitset<8>(items_flag) << endl;

    ////item0 on
    //items_flag |= opt0;
    //cout << "Item0 obtained " << bitset<8>(items_flag) << endl;
    //
    ////item3 on
    //items_flag |= opt3;
    //cout << "Item3 obtained " << bitset<8>(items_flag) << endl;

    //// item3 lost
    //items_flag &= ~opt3;

    //// has item1 ?
    //if (items_flag & opt1) {cout << "Has item1" << endl;}

    //// has item0 ?
    //if (items_flag & opt0) { cout << "Has item0" << endl;}

    //// obtain item 2,3
    //items_flag |= (opt2 | opt3);

    //cout << bitset<8>(opt2 | opt3) << endl;
    //cout << "Item2, 3 obtained " << bitset<8>(items_flag) << endl;

    //if ((items_flag & opt2) && !(items_flag & opt1))
    //{
    //    items_flag ^= (opt1 | opt2);
    //}
    //cout << bitset<8>(items_flag) << endl;
    ////glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); 같은 곳에 사용함



    ////bit mask

    const unsigned int red_mask = 0xFF0000;
    const unsigned int green_mask = 0x00FF00;
    const unsigned int blue_mask = 0x0000FF;

    cout << std::bitset<32>(red_mask) << endl;
    cout << std::bitset<32>(green_mask) << endl;
    cout << std::bitset<32>(blue_mask) << endl;

    unsigned int pixel_color = 0xDAA520;

    cout << std::bitset<32>(pixel_color) << endl;

    unsigned char red, green, blue;
    
    red = ((pixel_color & red_mask) >> 16);
    green = ((pixel_color & green_mask) >> 8);
    blue = pixel_color & blue_mask;

    cout << "red " << std::bitset<8>(red) << " " << int(red) << endl;
    cout << "green " << std::bitset<8>(green) << " " << int(green) << endl;
    cout << "blue " << std::bitset<8>(blue) << " " << int(blue) << endl;


    return 0;
}
