#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80036C40();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_80325C6C();
void *fn_803287A8();
void *fn_80328C10();
void *fn_8032A6B8();
void fn_8032A704();
void fn_8032ABFC();
extern char lbl_80453640[];
extern char lbl_80453658[];
extern char lbl_804E19F0[];
extern char lbl_804E19F8[];
extern char lbl_804E1A10[];
extern char lbl_804E1A28[];
extern char lbl_804E1A40[];
extern char lbl_80535D9C[];
extern void *lbl_80535DA0;
extern void *lbl_80535DBC;
void fn_8032A828();
void *fn_8032A894();
void *fn_8032A8B4();
void fn_8032A900();
void fn_8032A928();
void *fn_8032A9A0();
void fn_8032A9C0();
}
extern "C" {
void fn_8032A800(){
 fn_80066188((int)fn_8032A828);
}
void fn_8032A828(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D9C,(int)fn_8032A928,(int)fn_80328C10,(int)fn_8032A894,(int)lbl_80453640,112,(int)fn_8032A704,0,0,0);
}
void *fn_8032A894(){return fn_8032A6B8();}
void *fn_8032A8B4(){
 if(!lbl_80535DA0 || !(reinterpret_cast<unsigned int *>(lbl_80535DA0)[0x24/4]&4)) fn_8032A900();
 return lbl_80535DA0;
}
void fn_8032A900(){
 fn_80066188((int)fn_8032A928);
}
void fn_8032A928(){
 fn_803250AC();
 fn_80066204(1,(int)&lbl_80535DA0,(int)fn_80325C6C,(int)fn_803287A8,(int)fn_8032A9A0,(int)lbl_80453658,112,0,(int)fn_8032A9C0,0,(int)lbl_804E19F0);
}
void *fn_8032A9A0(){return fn_8032A8B4();}
void fn_8032A9C0(){
 void *value0=lbl_80535DA0;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E19F8,6);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+5));
 void *value3=fn_80036C40();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_804E1A10,lbl_804E1A28,lbl_804E1A40,value1);
}
void *fn_8032AA60(){
 if(!lbl_80535DBC || !(reinterpret_cast<unsigned int *>(lbl_80535DBC)[0x24/4]&4)) fn_8032ABFC();
 return lbl_80535DBC;
}
}
#pragma pop
