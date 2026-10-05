#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_8012FC48();
void fn_8014ACF4();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8049F054[];
extern char lbl_8049F060[];
extern char lbl_804A8BF4[];
extern char lbl_804A8C58[];
extern char lbl_8055FB84[8];
extern void *lbl_805621F4;
extern void *lbl_805642DC;
extern void *lbl_805642E0;
extern void *lbl_805642E4;
void *fn_8014A870();
void fn_8014A8AC();
void fn_8014A8D4();
void *fn_8014A938();
void *fn_8014A994();
void *fn_8014A9D0();
void fn_8014AA40();
void fn_8014AA68();
void *fn_8014AAD4();
}
struct UnknownGenObject8014A9D0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_8014A834(){
 if(!lbl_805642DC) lbl_805642DC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805642DC;
}
void *fn_8014A870(){
 if(!lbl_805642DC || !(reinterpret_cast<unsigned int *>(lbl_805642DC)[0x24/4]&4)) fn_8014A8AC();
 return lbl_805642DC;
}
void fn_8014A8AC(){
 fn_80066188((int)fn_8014A8D4);
}
void fn_8014A8D4(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_805642DC,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8014A938,(int)lbl_8049F054,8,0,0,0,0);
}
void *fn_8014A938(){return fn_8014A870();}
void *fn_8014A958(){
 if(!lbl_805642E0) lbl_805642E0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805642E0;
}
void *fn_8014A994(){
 if(!lbl_805642E0 || !(reinterpret_cast<unsigned int *>(lbl_805642E0)[0x24/4]&4)) fn_8014AA40();
 return lbl_805642E0;
}
void *fn_8014A9D0(){
 UnknownGenObject8014A9D0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804A8C58;
 object.unknown00=lbl_804A8BF4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014AA40(){
 fn_80066188((int)fn_8014AA68);
}
void fn_8014AA68(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805642E0,(int)fn_8002907C,(int)fn_80024180,(int)fn_8014AAD4,(int)lbl_8049F060,20,(int)fn_8014A9D0,0,0,(int)lbl_8055FB84);
}
void *fn_8014AAD4(){return fn_8014A994();}
void *fn_8014AAF4(){
 if(!lbl_805642E4) lbl_805642E4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805642E4;
}
void *fn_8014AB30(){
 if(!lbl_805642E4 || !(reinterpret_cast<unsigned int *>(lbl_805642E4)[0x24/4]&4)) fn_8014ACF4();
 return lbl_805642E4;
}
}
#pragma pop
