#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802694F8();
void fn_802B1AC8();
void *fn_802D1640();
void fn_802D168C();
void fn_802D1840();
void fn_802D1850();
extern char lbl_8041FA94[];
extern char lbl_805350F8[];
void fn_802D17AC();
void *fn_802D1820();
}
extern "C" {
void fn_802D1784(){
 fn_80066188((int)fn_802D17AC);
}
void fn_802D17AC(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805350F8,(int)fn_802694F8,(int)fn_802D1840,(int)fn_802D1820,(int)lbl_8041FA94,24,(int)fn_802D168C,(int)fn_802D1850,0,0);
}
void *fn_802D1820(){return fn_802D1640();}
}
#pragma pop
