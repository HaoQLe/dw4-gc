#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802694F8();
void fn_802B1AC8();
void *fn_802D1640();
void fn_802D168C();
void fn_802D1AB4();
extern char lbl_8041FA94[];
extern char lbl_804D1818[];
extern char lbl_804D181C[];
extern char lbl_804D1820[];
extern char lbl_804D1824[];
extern void *lbl_805350F8;
extern void *lbl_80535100;
extern void *lbl_80565FEC;
void fn_802D17AC();
void *fn_802D1820();
void *fn_802D1840();
void fn_802D1850();
}
extern "C" {
void fn_802D1784(){
 fn_80066188((int)fn_802D17AC);
}
void fn_802D17AC(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_805350F8,(int)fn_802694F8,(int)fn_802D1840,(int)fn_802D1820,(int)lbl_8041FA94,24,(int)fn_802D168C,(int)fn_802D1850,0,0);
}
void *fn_802D1820(){return fn_802D1640();}
void *fn_802D1840(){return lbl_80565FEC;}
void fn_802D1850(){
 void *meta=lbl_805350F8;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D1818,0x1);
 fn_800659C0(meta,lbl_804D181C,lbl_804D1820,lbl_804D1824,field);
}
void *fn_802D18D0(){
 if(!lbl_80535100 || !(reinterpret_cast<unsigned int *>(lbl_80535100)[0x24/4]&4)) fn_802D1AB4();
 return lbl_80535100;
}
}
#pragma pop
