#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_80284294();
void *fn_80284728();
void fn_80286008(void *,short);
void fn_802862A0();
extern char lbl_80416AD8[];
extern char lbl_80416AEC[];
extern char lbl_80416B00[];
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804CB110[];
extern char lbl_804CB5A0[];
extern char lbl_804CB604[];
extern char lbl_804CBE58[];
extern void *lbl_80515CC0;
extern void *lbl_80515CC4;
extern void *lbl_80515CC8;
extern void *lbl_80515CCC;
extern void *lbl_805621F4;
void *fn_80285AB0();
void fn_80285AFC();
void fn_80285B24();
void *fn_80285B94();
void *fn_80285BB4();
void *fn_80285C24();
void *fn_80285C70();
void fn_80285CE4();
void fn_80285D0C();
void *fn_80285D80();
void *fn_80285DA0();
void fn_80285DEC();
void fn_80285E14();
void *fn_80285E7C();
}
struct UnknownGenObject80285C70_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80285F7C {
 void *unknown00;
 char unknown04[4];
 int unknown08;
 int unknown0C;
 int unknown10;
 int unknown14;
 int unknown18;
 int unknown1C;
 int unknown20;
 int unknown24;
 int unknown28;
 int unknown2C;
 int unknown30;
 char unknown34[52];
 int unknown68;
 char unknown6C[4];
};
extern "C" {
void *fn_80285A5C(){
 if(!lbl_80515CC0) lbl_80515CC0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80515CC0;
}
void *fn_80285AB0(){
 if(!lbl_80515CC0 || !(reinterpret_cast<unsigned int *>(lbl_80515CC0)[0x24/4]&4)) fn_80285AFC();
 return lbl_80515CC0;
}
void fn_80285AFC(){
 fn_80066188((int)fn_80285B24);
}
void fn_80285B24(){
 fn_80284294();
 fn_80066204(1,(int)&lbl_80515CC0,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80285B94,(int)lbl_80416AD8,8,0,(int)fn_80285BB4,0,0);
}
void *fn_80285B94(){return fn_80285AB0();}
void *fn_80285BB4(){
 void *value0=lbl_80515CC0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+60)=(void *)fn_80284728;
 return value0;
}
void *fn_80285BD0(){
 if(!lbl_80515CC4) lbl_80515CC4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80515CC4;
}
void *fn_80285C24(){
 if(!lbl_80515CC4 || !(reinterpret_cast<unsigned int *>(lbl_80515CC4)[0x24/4]&4)) fn_80285CE4();
 return lbl_80515CC4;
}
void *fn_80285C70(){
 UnknownGenObject80285C70_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804CB604;
 object.unknown00=lbl_804CB5A0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80285CE4(){
 fn_80066188((int)fn_80285D0C);
}
void fn_80285D0C(){
 fn_80284294();
 fn_80066204(0,(int)&lbl_80515CC4,(int)fn_8002907C,(int)fn_80024180,(int)fn_80285D80,(int)lbl_80416AEC,20,(int)fn_80285C70,0,0,(int)lbl_804CB110);
}
void *fn_80285D80(){return fn_80285C24();}
void *fn_80285DA0(){
 if(!lbl_80515CC8 || !(reinterpret_cast<unsigned int *>(lbl_80515CC8)[0x24/4]&4)) fn_80285DEC();
 return lbl_80515CC8;
}
void fn_80285DEC(){
 fn_80066188((int)fn_80285E14);
}
void fn_80285E14(){
 fn_80284294();
 fn_80066204(1,(int)&lbl_80515CC8,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80285E7C,(int)lbl_80416B00,8,0,0,0,0);
}
void *fn_80285E7C(){return fn_80285DA0();}
void *fn_80285E9C(void *object){
 fn_802862A0();
 return fn_8006546C(lbl_80515CCC,object);
}
void *fn_80285EDC(){
 if(!lbl_80515CCC) lbl_80515CCC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80515CCC;
}
void *fn_80285F30(){
 if(!lbl_80515CCC || !(reinterpret_cast<unsigned int *>(lbl_80515CCC)[0x24/4]&4)) fn_802862A0();
 return lbl_80515CCC;
}
void *fn_80285F7C(){
 UnknownGenObject80285F7C object;
 fn_8006665C(&object);
 object.unknown00=lbl_804CBE58;
 object.unknown08=0;
 object.unknown0C=0;
 object.unknown10=0;
 object.unknown14=0;
 object.unknown18=0;
 object.unknown1C=0;
 object.unknown20=0;
 object.unknown24=0;
 object.unknown28=0;
 object.unknown2C=0;
 object.unknown30=0;
 object.unknown68=0;
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_80286008(&object,-1);
 return result;
}
}
#pragma pop
