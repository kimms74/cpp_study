#pragma once

//#include "Timer.h"    //���� ������ header������ Timer�� ���� ���� �ȴ�
                        //cpp ���Ͽ� �߰��ϸ� ��
class Worker            //�̷��� ����ִ� ���� ���� dependency�� ����ߴٰ� �˸� �ȴ�(�׸��� cppȮ���ϱ�)
{
public:                 //dependency�� member variable�� �ٸ� class�� �������� �ʱ� ������ ������ ���°� �뵵 �ܿ� �����ϴ� 
    void doSomething(); //������ ���� ���� ���� �����̴�
};