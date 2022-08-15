/*Napisati C program koji koristi jednostruko povezani popis za strukturu COVID.
Struktura ima pokazivace na ime,  prezime i pokazivac na strukturu DETALJI,
koja ima clanove: broj kontakata, ocjena razine simptoma [od 1 do 10], cijepljeni [da - 1, ne - 0].
Napisati funkcije za kreiranje povezanog popisa, umetanje novog clana na pocetak popisa,
pretraživanje popisa po broju kontakta, ispis popisa.

Napisati funkciju unosOsobe() koja ima pokazivac na strukturu COVID s kojom se unose podaci u clanove strukture.
Napisati funkciju ispisOsobe() koja ispiuje sve osobe.
Napisati funkciju PretragaPopisa() za pretrazivanje popisa
koji ima zeljeni broj kontakta.
Napisati funkciju IspisZeljeneOsobe() koja ce ispisivati nadjenu osobu u popisu.
Napisati funkciju OslobadjanjeOsoba() koja oslobađa dinamički zauzetu memoriju
za povezani popis.

U potpunosti rukovati memorijom.
*/


#include <stdio.h>
#include "Functions.h"

int main() {

    int n, i, x;

    COVID* headNode = NULL;
    COVID* OsobaKontakt = NULL;


    printf("Koliko osoba zelis upisati u registar COVID osoba?\n");
    scanf("%d", &n);

    headNode = kreiranjeListe();

    for (i = 0; i < n - 1; i++)
    {
        headNode = ubaciNoviCvor(headNode);
    }


    IspisOsobe(headNode);
    printf("Osoba s koliko kontakta?\n");
    scanf("%d", &x);
    OsobaKontakt = PretragaPopisa(headNode, x);
    IspisZeljeneOsobe(OsobaKontakt);
    printf("REZULTATI:\n");
    if (OsobaKontakt == NULL) {
        printf("Osoba s toliko kontakata nije pronadjena!");
    }
    else IspisZeljeneOsobe(OsobaKontakt);


    headNode = OslobadjanjeOsoba(headNode);
    if (headNode == NULL)
        printf("Oslobodjen cvor!\n");


    return 0;
}


HEADER.H
#ifndef HEADER_H
#define HEADER_H

typedef struct covid {
    char* ime;
    char* prezime;
    struct detalji* osoba;
    struct covid* noviCvor;
}COVID;

typedef struct detalji {
    int brKontakti;
    int ocjena;
    unsigned int cijepljeni;
}DETALJI;


void UpisOsobe(COVID*);
void IspisOsobe(COVID*);
COVID* kreiranjeListe();
COVID* ubaciNoviCvor(COVID*);
COVID* PretragaPopisa(COVID*, int);
COVID* OslobadjanjeOsoba(COVID*);
void IspisZeljeneOsobe(COVID*);
#endif

FUNCTIONS.C
#include <stdlib.h>
#include<stdio.h>
#include "Functions.h"



void UpisOsobe(COVID* headNode)
{

    scanf("%s", headNode->ime);
    scanf("%s", headNode->prezime);
    scanf("%d", &headNode->osoba->brKontakti);
    scanf("%d", &headNode->osoba->ocjena);
    scanf("%u", &headNode->osoba->cijepljeni);

}

void IspisOsobe(COVID* traverseNode) {


    if (traverseNode == NULL) {
        exit(EXIT_FAILURE);
    }
    else {
        while (traverseNode) {
            printf("Ime: %s\nPrezime: %s\nBroj kontakata: %d\n", traverseNode->ime, traverseNode->prezime, traverseNode->osoba->brKontakti);
            traverseNode = traverseNode->noviCvor;
        }
    }

}

void IspisZeljeneOsobe(COVID* traverseNode) {

    if (traverseNode != NULL)
        printf("Ime: %s\nPrezime: %s\nBroj kontakata: %d\n", traverseNode->ime, traverseNode->prezime, traverseNode->osoba->brKontakti);


}


COVID* kreiranjeListe() {

    COVID* headNode = (COVID*)calloc(1, sizeof(COVID));
    if (headNode == NULL) {
        perror("Kreiranje");
        return NULL;
    }
    else {
        headNode->ime = (char*)malloc(50);
        if (headNode->ime == NULL) {
            perror("Kreiranje");
            return NULL;
        }
        headNode->prezime = (char*)malloc(50);
        if (headNode->prezime == NULL) {
            perror("Kreiranje");
            return NULL;
        }
        headNode->osoba = (DETALJI*)malloc(sizeof(DETALJI));
        if (headNode->osoba == NULL) {
            perror("Kreiranje");
            return NULL;
        }
        headNode->noviCvor = NULL;
        UpisOsobe(headNode);
    }
    return headNode;
}


COVID* ubaciNoviCvor(COVID* headNode) {

    COVID* newHeadNode = (COVID*)calloc(1, sizeof(COVID));
    if (newHeadNode == NULL) {
        perror("Kreiranje");
        return headNode;
    }
    else {
        newHeadNode->ime = (char*)malloc(50);
        if (newHeadNode->ime == NULL) {
            perror("Kreiranje");
            return NULL;
        }
        newHeadNode->prezime = (char*)malloc(50);
        if (newHeadNode->prezime == NULL) {
            perror("Kreiranje");
            return NULL;
        }
        newHeadNode->osoba = (DETALJI*)malloc(sizeof(DETALJI));
        if (newHeadNode->osoba == NULL) {
            perror("Kreiranje");
            return NULL;
        }
        UpisOsobe(newHeadNode);
        newHeadNode->noviCvor = headNode;
    }
    return newHeadNode;
}



COVID* OslobadjanjeOsoba(COVID* glavniCvor)
{
    COVID* tmp = NULL;
    while (glavniCvor) {
        tmp = glavniCvor;
        glavniCvor = glavniCvor->noviCvor;
        free(tmp);
    }
    return NULL;
}



COVID* PretragaPopisa(COVID* headNode, int brojKontakata) {

    if (headNode == NULL) {
        return NULL;
    }
    else {
        while (headNode) {
            if (headNode->osoba->brKontakti == brojKontakata) return headNode;
            headNode = headNode->noviCvor;
        }
    }
    return NULL;

}