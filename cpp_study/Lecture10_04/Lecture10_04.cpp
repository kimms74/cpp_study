//Association relationship

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Doctor;   //forward declaration   //제휴 관계에서는 서로를 참조하므로 전방 선언을 해줘야함
                                        //제휴 관계는 자주 쓰이지는 않는다
                //전방 선언이 돼있다면 제휴관계임을 유추할 수 있다
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

    //void meetDoctors()  //code는 위에서 밑으로 읽으므로 Doctor를 전방선언 해줬지만 내용물을 몰라 ele 출력 불가능
    //{
    //    for (auto& ele : m_doctors)
    //    {
    //        cout << "Meet doctor : " << ele->m_name << std::endl;
    //    }
    //}

    void meetDoctors(); //따라서 정의는 class Doctor 보다 아래에 해둔다

    friend class Doctor;
};

class Doctor
{
private:
    std::string m_name;
    vector<Patient*> m_patients;          //<Patient>*가 아닌<Patient*>인 이유: pointer 변수를 담는다는 의미(<Patient>*는 Patient라는 타입에 reference를 담겠다는 말)
    vector<Doctor*> m_doctors;           //doctor가 doctor를 만나는 경우(reflexive association)

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

    //추가적인 팁: m_doctors, m_patients에서 type을 pointer를 안쓰고 
    //각각의 인물에 ID를 int로 부여해서 ID로 환자를 찾는 방식으로 구현하기도 함(꼭 필요할 때가 있다)
    
    //reflexive association: Doctor가 Doctor를 만나는 경우 Doctor* m_doctor;가 필요하다

    return 0;
}
