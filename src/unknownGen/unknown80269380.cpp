#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80023CF4();
void fn_80029D58();
void *fn_80029E64(void *);
void *fn_8002BED0();
void *fn_800607F4(void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void *fn_80270424();
void *fn_80270A38();
void fn_80272D8C(void *,int);
void fn_80273450(void *,void *);
void fn_802734C8(void *,void *,void *);
void fn_802737A0(void *);
void fn_802739F0(void *,int);
extern char lbl_8047650C[];
extern char lbl_804C92B0[];
extern char lbl_804C92D4[];
extern char lbl_804C92E0[];
extern char lbl_804C9AF0[];
extern char lbl_80560EB0[8];
extern char lbl_80560EB8[8];
extern char lbl_80560EC0[8];
extern char lbl_80560EC8[8];
extern char lbl_80560ED0[8];
extern void *lbl_805621F4;
extern char lbl_80565FE8[1];
extern char lbl_80565FE9[1];
extern void *lbl_80565FEC;
extern void *lbl_80565FF8;
extern void *lbl_80566044;
void fn_80269380();
void *fn_802693B4();
void *fn_802693F0();
void fn_802694D0();
void fn_802694F8();
void *fn_8026956C();
void fn_8026958C();
void *fn_80269648();
void *fn_80269684();
void fn_802696C4();
void fn_802696EC();
void *fn_80269754();
}
struct UnknownGenRoot802693F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802693F0(){fn_8006665C(this);}
};
struct UnknownGenObject802693F0_0 : UnknownGenRoot802693F0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802693F0_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802693F0 : UnknownGenObject802693F0_0 {
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject802693F0(){unknown00=lbl_804C9AF0;}
};
struct UnknownGenObject80269684_0 {
 void *unknown00;
 char unknown04[4];
};
extern "C" {
void fn_80269380(){
 if((int)*reinterpret_cast<signed char *>((lbl_80565FE9+0))==0){
  *reinterpret_cast<unsigned char *>((lbl_80565FE8+0))=0;
  *reinterpret_cast<unsigned char *>((lbl_80565FE9+0))=1;
 }
 if((void *)(int)*reinterpret_cast<unsigned char *>((lbl_80565FE8+0))){
  return;
 }
 *reinterpret_cast<unsigned char *>((lbl_80565FE8+0))=1;
}
void *fn_802693B4(){
 if(!lbl_80565FEC || !(reinterpret_cast<unsigned int *>(lbl_80565FEC)[0x24/4]&4)) fn_802694D0();
 return lbl_80565FEC;
}
void *fn_802693F0(){
 UnknownGenObject802693F0 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804C9AF0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_802694D0(){
 fn_80066188((int)fn_802694F8);
}
void fn_802694F8(){
 fn_80269380();
 fn_80066204(0,(int)&lbl_80565FEC,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_8026956C,(int)lbl_804C92B0,20,(int)fn_802693F0,(int)fn_8026958C,0,(int)lbl_80560EB0);
}
void *fn_8026956C(){return fn_802693B4();}
void fn_8026958C(){
 void *value0=lbl_80565FEC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_80560EB8,2);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=fn_8002BED0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_80560EC0,lbl_80560EC8,lbl_80560ED0,value1);
}
void *fn_8026960C(){
 if(!lbl_80565FF8) lbl_80565FF8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565FF8;
}
void *fn_80269648(){
 if(!lbl_80565FF8 || !(reinterpret_cast<unsigned int *>(lbl_80565FF8)[0x24/4]&4)) fn_802696C4();
 return lbl_80565FF8;
}
void *fn_80269684(){
 UnknownGenObject80269684_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804C92E0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_802696C4(){
 fn_80066188((int)fn_802696EC);
}
void fn_802696EC(){
 fn_80269380();
 fn_80066204(0,(int)&lbl_80565FF8,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80269754,(int)lbl_804C92D4,8,(int)fn_80269684,0,0,0);
}
void *fn_80269754(){return fn_80269648();}
void *fn_80269774(){return lbl_80565FF8;}
void *fn_8026977C(){return fn_80270424();}
void *fn_8026979C(){return fn_80270A38();}
void fn_802697BC(int p0,int p1,int p2,int p3){
 fn_802737A0((void *)p0);
 fn_80273450((void *)p0,(void *)p1);
 fn_802734C8((void *)p0,(void *)p2,(void *)p3);
 fn_802739F0((void *)p0,-3);
 fn_80272D8C((void *)p0,-2);
}
void fn_80269830(int p0,int p1,int p2){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=(void *)p2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+4)=(void *)p1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=lbl_80566044;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=(void *)0;
 void *value0=lbl_80566044;
 if(value0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+16)=(void *)p0;
 }
 lbl_80566044=(void *)p0;
}
}
#pragma pop
