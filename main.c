#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char street[80];
    char houseNumber[5];
    char postalCode[20];
    char city[80];
} Address;
typedef struct {
    float weight;
    float measurements;
    Address address;//so that u can have more than one address all the time
} Parcel;

char* _addressmaker(Address* address1) {
    char* newaddress = malloc(185 * sizeof(char));//malloc saves a spot in stack depending on the size u want
    strcpy(newaddress, address1->street);//gets the first str
    strcat(newaddress, " ");//appends the string
    strcat(newaddress, address1->houseNumber);
    strcat(newaddress, " ");
    strcat(newaddress, address1->postalCode);
    strcat(newaddress, " ");
    strcat(newaddress, address1->city);
    return newaddress;
}
float _priceChecker(Parcel* parcel1) {
    if(parcel1->weight<2 && parcel1->measurements<20) {
        return 4.9;
    }else if(parcel1->weight>31.5 && parcel1->measurements>100) {
        return 20.9;
    }else {
        return 6.9;
    }
}
int main(int argc){// try argc for weight
    Address address1= {"Am bassel","3","36549","hauidhsudh"};
    Parcel package1= {1,18,address1};
    if (argc >2) {
        printf("Please enter 2 arguments\n");
        return 1;
    }
    printf("%.2f,%.2f,%s\n",package1.weight,package1.measurements,_addressmaker(&package1.address));
    float price = _priceChecker(&package1);
    printf("%.2f€ is the price for the parcel\n",price);
    return 0;
}