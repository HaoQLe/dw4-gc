#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2B2C();
void fn_802E3284();
void *fn_802E420C();
void fn_802E4258();
void fn_802E458C();
extern char lbl_80420E04[];
extern char lbl_80535724[];
extern void *lbl_80535728;
void fn_802E431C();
void *fn_802E4388();
}
extern "C" {
void fn_802E42F4(){
 fn_80066188((int)fn_802E431C);
}
void fn_802E431C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535724,(int)fn_802E3284,(int)fn_802B2B2C,(int)fn_802E4388,(int)lbl_80420E04,44,(int)fn_802E4258,0,0,0);
}
void *fn_802E4388(){return fn_802E420C();}
void *fn_802E43A8(){
 if(!lbl_80535728 || !(reinterpret_cast<unsigned int *>(lbl_80535728)[0x24/4]&4)) fn_802E458C();
 return lbl_80535728;
}
}
#pragma pop
