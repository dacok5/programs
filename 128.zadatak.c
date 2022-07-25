/*Program treba napisat pointer na strukturnu varijablu je poslan funkciji*/


#include<stdio.h>
struct student {
    char ime[20];
    int broj;
    int ocjena;
};
void ispis(struct student*);
void ocjene(struct student*);
int main()
{
    struct student stu1 = { "Ivan", 12, 4 };
    struct student stu2 = { "Mate", 18, 3 };
    ocjene(&stu1);
    ocjene(&stu2);
    ispis(&stu1);
    ispis(&stu2);

    return 0;

}
void ocjene(struct student* stuptr)
{
    (stuptr->ocjena);
}
void ispis(struct student* stuptr)
{
    printf("Ime - %s\t", stuptr->ime);
    printf("Broj - %d\t", stuptr->broj);
    printf("Ocjena  - %d\n", stuptr->ocjena);
}