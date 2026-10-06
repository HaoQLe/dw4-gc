#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_80216620();
void fn_80216DB8();
void *fn_802177B4();
extern char lbl_804BA348[];
extern char lbl_804BC948[];
extern char lbl_80560B98[8];
extern void *lbl_805659EC;
void *fn_80216C38();
void *fn_80216C74();
void fn_80216CFC();
void fn_80216D24();
void *fn_80216D98();
}
struct UnknownGenRoot80216C74 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80216C74(){fn_8006665C(this);}
};
struct UnknownGenObject80216C74 : UnknownGenRoot80216C74 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject80216C74(){unknown00=lbl_804BC948;}
};
extern "C" {
void *fn_80216BE0(){return fn_802177B4();}
void *fn_80216C00(void *object){
 fn_80216CFC();
 return fn_8006546C(lbl_805659EC,object);
}
void *fn_80216C38(){
 if(!lbl_805659EC || !(reinterpret_cast<unsigned int *>(lbl_805659EC)[0x24/4]&4)) fn_80216CFC();
 return lbl_805659EC;
}
void *fn_80216C74(){
 UnknownGenObject80216C74 object;
 object.unknown00=lbl_804BC948;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80216CFC(){
 fn_80066188((int)fn_80216D24);
}
void fn_80216D24(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_805659EC,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80216D98,(int)lbl_804BA348,16,(int)fn_80216C74,(int)fn_80216DB8,0,(int)lbl_80560B98);
}
void *fn_80216D98(){return fn_80216C38();}
}
#pragma pop
