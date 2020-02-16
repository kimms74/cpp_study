//Multiple inheritance

#include <iostream>

using namespace std;

class USBDevice
{
private:
    long m_id;

public:
    USBDevice(long id_in) : m_id(id_in) {}

    long getID() { return m_id; }

    void plugAndPaly() {}
};

class NetworkDevice
{
private:
    long m_id;

public:
    NetworkDevice(long id_in) : m_id(id_in) {}

    long getID() { return m_id; }

    void networking() {}
};

class USBNetworkDevice : public USBDevice, public NetworkDevice //다중 상속 받을 수 있다
{
public:
    USBNetworkDevice(long usb_id, long net_id)
        : USBDevice(usb_id), NetworkDevice(net_id)  //생성자 parameter를 여러개 만들어 줘야함
    {}
};

int main()
{
    USBNetworkDevice my_device(3.14, 6.022);

    my_device.networking();
    my_device.plugAndPaly();

    //my_device.getID();  //상속을 해주는 class끼리 같은 이름의 함수가 있으면 ambiguity발생

    my_device.USBDevice::getID();       //getID()앞에 ::를 통해 부모 class를 명시해주면 됨
    my_device.NetworkDevice::getID();
    

    //class A가 있고 class B1,B2가 A를 상속받고, C가 B1,B2를 상속받는 경우를 다이아몬드 상속이라 한다
    //이 구조는 피해주는게 좋다(여러 문제가 발생할 수 있다, 그렇다고 무조건 나쁜건 아니다!)

    return 0;
}
