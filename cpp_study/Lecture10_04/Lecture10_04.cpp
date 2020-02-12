//Association relationship

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Doctor;   //forward declaration   //���� ���迡���� ���θ� �����ϹǷ� ���� ������ �������
                                        //���� ����� ���� �������� �ʴ´�
                //���� ������ ���ִٸ� ���ް������� ������ �� �ִ�
class Patient
{
private:
    std::string m_name;
    vector<Doctor*> m_doctors;

public:
    Patient(const std::string& name_in=" ")
        :m_name(name_in) {}

    void addDoctor(Doctor* const new_doctor)
    {
        m_doctors.push_back(new_doctor);
    }

    //void meetDoctors()  //code�� ������ ������ �����Ƿ� Doctor�� ���漱�� �������� ���빰�� ���� ele ��� �Ұ���
    //{
    //    for (auto& ele : m_doctors)
    //    {
    //        cout << "Meet doctor : " << ele->m_name << std::endl;
    //    }
    //}

    void meetDoctors(); //���� ���Ǵ� class Doctor ���� �Ʒ��� �صд�

    friend class Doctor;
};

class Doctor
{
private:
    std::string m_name;
    vector<Patient*> m_patients;          //<Patient>*�� �ƴ�<Patient*>�� ����: pointer ������ ��´ٴ� �ǹ�(<Patient>*�� Patient��� Ÿ�Կ� reference�� ��ڴٴ� ��)
    vector<Doctor*> m_doctors;           //doctor�� doctor�� ������ ���(reflexive association)

public:
    Doctor(const std::string& name_in)
        :m_name(name_in) {}

    void addPatient(Patient* const new_patient)
    {
        m_patients.push_back(new_patient);
    }

    void meetPatients()
    {
        for (auto& ele : m_patients)
        {
            cout << "Meet doctor : " << ele->m_name << std::endl;
        }
    }

    friend class Patient;
};

void Patient::meetDoctors()
{
    for (auto& ele : m_doctors)
    {
        cout << "Meet doctor : " << ele->m_name << std::endl;
    }
}

int main()
{
    Patient* p1 = new Patient("Jack Jack");
    Patient* p2 = new Patient("Dash");
    Patient* p3 = new Patient("Violet");

    Doctor* d1 = new Doctor("Doctor K");
    Doctor* d2 = new Doctor("Doctor L");

    //patients meet doctors
    p1->addDoctor(d1);
    p2->addDoctor(d2);
    p2->addDoctor(d1);

    //doctors meet patients
    d1->addPatient(p1);
    d2->addPatient(p2);
    d1->addPatient(p2);

    p1->meetDoctors();
    d1->meetPatients();


    //delete
    delete p1;
    delete p2;
    delete p3;

    delete d1;
    delete d2;

    //�߰����� ��: m_doctors, m_patients���� type�� pointer�� �Ⱦ��� 
    //������ �ι��� ID�� int�� �ο��ؼ� ID�� ȯ�ڸ� ã�� ������� �����ϱ⵵ ��(�� �ʿ��� ���� �ִ�)
    
    //reflexive association: Doctor�� Doctor�� ������ ��� Doctor* m_doctor;�� �ʿ��ϴ�

    return 0;
}
