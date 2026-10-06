#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_80284540();
void fn_80284B74();
void fn_80402E28();
void fn_80404E40();
extern char lbl_80462130[];
extern char lbl_804CBB90[];
extern char lbl_804F1494[];
extern void *lbl_8055C83C;
extern void *lbl_805621F4;
void *fn_80404CA0();
void *fn_80404CEC();
void fn_80404D84();
void fn_80404DAC();
void *fn_80404E20();
}
struct UnknownGenRoot80404CEC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80404CEC(){fn_8006665C(this);}
};
struct UnknownGenObject80404CEC : UnknownGenRoot80404CEC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80404CEC(){unknown00=lbl_804F1494;}
};
extern "C" {
void *fn_80404C4C(){
 if(!lbl_8055C83C) lbl_8055C83C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8055C83C;
}
void *fn_80404CA0(){
 if(!lbl_8055C83C || !(reinterpret_cast<unsigned int *>(lbl_8055C83C)[0x24/4]&4)) fn_80404D84();
 return lbl_8055C83C;
}
void *fn_80404CEC(){
 UnknownGenObject80404CEC object;
 object.unknown00=lbl_804CBB90;
 object.unknown00=lbl_804F1494;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80404D84(){
 fn_80066188((int)fn_80404DAC);
}
void fn_80404DAC(){
 fn_80402E28();
 fn_80066204(0,(int)&lbl_8055C83C,(int)fn_80284B74,(int)fn_80284540,(int)fn_80404E20,(int)lbl_80462130,16,(int)fn_80404CEC,(int)fn_80404E40,0,0);
}
void *fn_80404E20(){return fn_80404CA0();}
}
#pragma pop
