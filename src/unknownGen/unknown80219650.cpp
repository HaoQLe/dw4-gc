#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_80216620();
void fn_80219784();
extern char lbl_804BAA80[];
extern char lbl_804BB794[];
extern void *lbl_80565B2C;
void *fn_80219650();
void *fn_8021968C();
void fn_802196CC();
void fn_802196F4();
void *fn_80219764();
}
struct UnknownGenObject8021968C {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80219650(){
 if(!lbl_80565B2C || !(reinterpret_cast<unsigned int *>(lbl_80565B2C)[0x24/4]&4)) fn_802196CC();
 return lbl_80565B2C;
}
void *fn_8021968C(){
 UnknownGenObject8021968C object;
 fn_8006665C(&object);
 object.unknown00=lbl_804BB794;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_802196CC(){
 fn_80066188((int)fn_802196F4);
}
void fn_802196F4(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565B2C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80219764,(int)lbl_804BAA80,12,(int)fn_8021968C,(int)fn_80219784,0,0);
}
void *fn_80219764(){return fn_80219650();}
}
#pragma pop
