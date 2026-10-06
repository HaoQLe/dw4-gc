#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void *fn_8011F520();
void fn_8028C93C();
extern char lbl_804CCB50[];
extern char lbl_804CCC54[];
extern char lbl_805613C8[8];
extern char lbl_805613D0[4];
extern char lbl_805613DC[4];
extern char lbl_805613E0[4];
extern char lbl_805613E4[4];
extern void *lbl_80566178;
void *fn_8028E140();
void *fn_8028E17C();
void fn_8028E204();
void fn_8028E22C();
void *fn_8028E2A0();
void fn_8028E2C0();
}
struct UnknownGenRoot8028E17C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8028E17C(){fn_8006665C(this);}
};
struct UnknownGenObject8028E17C : UnknownGenRoot8028E17C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject8028E17C(){unknown00=lbl_804CCC54;}
};
extern "C" {
void *fn_8028E108(void *object){
 fn_8028E204();
 return fn_8006546C(lbl_80566178,object);
}
void *fn_8028E140(){
 if(!lbl_80566178 || !(reinterpret_cast<unsigned int *>(lbl_80566178)[0x24/4]&4)) fn_8028E204();
 return lbl_80566178;
}
void *fn_8028E17C(){
 UnknownGenObject8028E17C object;
 object.unknown00=lbl_804CCC54;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8028E204(){
 fn_80066188((int)fn_8028E22C);
}
void fn_8028E22C(){
 fn_8028C93C();
 fn_80066204(0,(int)&lbl_80566178,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8028E2A0,(int)lbl_804CCB50,12,(int)fn_8028E17C,(int)fn_8028E2C0,0,(int)lbl_805613C8);
}
void *fn_8028E2A0(){return fn_8028E140();}
void fn_8028E2C0(){
 void *value0=lbl_80566178;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_805613D0,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_8011F520();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_805613DC,lbl_805613E0,lbl_805613E4,value1);
}
}
#pragma pop
