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

class USBNetworkDevice : public USBDevice, public NetworkDevice //���� ��� ���� �� �ִ�
{
public:
    USBNetworkDevice(long usb_id, long net_id)
        : USBDevice(usb_id), NetworkDevice(net_id)  //������ parameter�� ������ ����� �����
    {}
};

int main()
{
    USBNetworkDevice my_device(3.14, 6.022);

    my_device.networking();
    my_device.plugAndPaly();

    //my_device.getID();  //����� ���ִ� class���� ���� �̸��� �Լ��� ������ ambiguity�߻�

    my_device.USBDevice::getID();       //getID()�տ� ::�� ���� �θ� class�� ������ָ� ��
    my_device.NetworkDevice::getID();
    

    //class A�� �ְ� class B1,B2�� A�� ��ӹް�, C�� B1,B2�� ��ӹ޴� ��츦 ���̾Ƹ�� ����̶� �Ѵ�
    //�� ������ �����ִ°� ����(���� ������ �߻��� �� �ִ�, �׷��ٰ� ������ ���۰� �ƴϴ�!)

    return 0;
}
