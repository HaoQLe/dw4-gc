#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void fn_8003A644();
void fn_8003A990();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
extern char lbl_80468468[];
extern char lbl_8046FAFC[];
extern char lbl_8046FE98[];
extern void *lbl_80562014;
extern void *lbl_80562020;
void *fn_8003A7BC();
void *fn_8003A7F8();
void fn_8003A8D0();
void fn_8003A8F8();
void *fn_8003A968();
void *fn_8003A988();
}
struct UnknownGenRoot8003A7F8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8003A7F8(){fn_8006665C(this);}
};
struct UnknownGenObject8003A7F8_0 : UnknownGenRoot8003A7F8 {
 char unknown04[4];
 UnknownGenString unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject8003A7F8_0(){unknown00=lbl_8046FAFC;}
};
struct UnknownGenObject8003A7F8 : UnknownGenObject8003A7F8_0 {
 char unknown10[96];
 inline ~UnknownGenObject8003A7F8(){unknown00=lbl_8046FE98;}
};
extern "C" {
void *fn_8003A784(void *object){
 fn_8003A8D0();
 return fn_8006546C(lbl_80562020,object);
}
void *fn_8003A7BC(){
 if(!lbl_80562020 || !(reinterpret_cast<unsigned int *>(lbl_80562020)[0x24/4]&4)) fn_8003A8D0();
 return lbl_80562020;
}
void *fn_8003A7F8(){
 UnknownGenObject8003A7F8 object;
 object.unknown00=lbl_8046FAFC;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown00=lbl_8046FE98;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8003A8D0(){
 fn_80066188((int)fn_8003A8F8);
}
void fn_8003A8F8(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80562020,(int)fn_8003A644,(int)fn_8003A988,(int)fn_8003A968,(int)lbl_80468468,100,(int)fn_8003A7F8,(int)fn_8003A990,0,0);
}
void *fn_8003A968(){return fn_8003A7BC();}
void *fn_8003A988(){return lbl_80562014;}
}
#pragma pop
