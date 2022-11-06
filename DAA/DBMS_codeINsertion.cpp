#include <iostream>
using namespace std;
int main()
{
    string id, name, place;

    for (int i = 0; i < 5; i++)
    {
        cin >> id >> name >> place;
        for (int j = 0; name[j]; j++)
            if (name[j] == '_')
            {
                name[j] = ' ';
            }
        cout << "INSERT INTO HOTEL VALUES(' " << id << "', '" << name << "', '" << place << "'); ";
    }
    return 0;
}

313 H111 A 1450.00
412 H111 N 1450.00
1267H235 N 1750.00
1289H235 N 1950.00
876 H432 A 1240.00

INSERT INTO ROOM VALUES (898, 'H432'  ,'A',1240.00);
INSERT INTO ROOM VALUES (345, 'H498'  ,'N',1600.00);
INSERT INTO ROOM VALUES (467, 'H498'  ,'N',1800.00);
INSERT INTO ROOM VALUES (100, 'H193' ,'A' ,1500.00);
INSERT INTO ROOM VALUES (120, 'H193' ,'N' ,1750.00);
INSERT INTO ROOM VALUES (257, 'H437'  ,'N',1400.00);
INSERT INTO ROOM VALUES (223, 'H437'  ,'N',1550.00);



898, 'H432'  ,'A', 1240.00
345, 'H498'  ,'N', 1600.00
467, 'H498'  ,'N', 1800.00
100, 'H193' ,'A' , 1500.00
120, 'H193' ,'N' , 1750.00
257, 'H437'  ,'N', 1400.00
223, 'H437'  ,'N', 1550.00



INSERT INTO GUEST VALUES('G256', 'Siddhi  Gupta',TO_DATE('2003/05/03', 'yyyy/mm/dd'),'F',9875456384,681521547896);
INSERT INTO GUEST VALUES('G367', 'Smruti  Agrawal',TO_DATE('2003/05/03', 'yyyy/mm/dd'),'F',9875416884,686521547896);
INSERT INTO GUEST VALUES('G879', 'Sham Sunder',TO_DATE('2003/05/03', 'yyyy/mm/dd'),'F',9875456889,681591547896);
INSERT INTO GUEST VALUES('G230', 'Sunishka  Malviya',TO_DATE('2003/05/03', 'yyyy/mm/dd'),'F',9878456884,681521547196);
INSERT INTO GUEST VALUES('G467', 'Vanshita  Chandarana',TO_DATE('2003/05/03', 'yyyy/mm/dd'),'F',9877456884,681521647896);
INSERT INTO GUEST VALUES('G190', 'Ram Kumar',TO_DATE('2003/05/03', 'yyyy/mm/dd'),'F',9875456864,681571547896);

    INSERT INTO BOOKING VALUES('H235', 'G256',313, TO_DATE('2022/09/08', 'yyyy/mm/dd'), TO_DATE('2022/09/10', 'yyyy/mm/dd'));
    INSERT INTO BOOKING VALUES('H111','G256',69,TO_DATE('2022/09/08', 'yyyy/mm/dd'), TO_DATE('2022/09/10', 'yyyy/mm/dd'));