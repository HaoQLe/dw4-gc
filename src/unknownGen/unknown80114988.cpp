#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800A325C(void *);
void fn_8010CBD4();
void fn_8011232C();
void fn_80114CA4();
extern char lbl_8047650C[];
extern char lbl_804956BC[];
extern char lbl_804956C8[];
extern char lbl_804969FC[];
extern char lbl_80496F28[];
extern void *lbl_805621F4;
extern void *lbl_80563784;
extern void *lbl_80563838;
void *fn_801149C4();
void *fn_80114A00();
void fn_80114BDC();
void fn_80114C04();
void *fn_80114C7C();
void *fn_80114C9C();
}
struct UnknownGenRoot80114A00 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80114A00(){fn_8006665C(this);}
};
struct UnknownGenObject80114A00_0 : UnknownGenRoot80114A00 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80114A00_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject80114A00_1 : UnknownGenObject80114A00_0 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject80114A00_1(){unknown00=lbl_80496F28;}
};
struct UnknownGenObject80114A00 : UnknownGenObject80114A00_1 {
 char unknown18[4];
 UnknownGenRefMember unknown1C;
 UnknownGenRefMember unknown20;
 char unknown24[4];
 inline ~UnknownGenObject80114A00(){unknown00=lbl_804969FC;}
};
extern "C" {
void *fn_80114988(){
 if(!lbl_80563838) lbl_80563838=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563838;
}
void *fn_801149C4(){
 if(!lbl_80563838 || !(reinterpret_cast<unsigned int *>(lbl_80563838)[0x24/4]&4)) fn_80114BDC();
 return lbl_80563838;
}
void *fn_80114A00(){
 UnknownGenObject80114A00 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80496F28;
 object.unknown14.value=0;
 object.unknown00=lbl_804969FC;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
UnknownGenHolder *dtor_80114B68(UnknownGenHolder *object,short flags){
 if(object){
  UnknownGenValue *value=object->unknown00;
  if(value){
   --value->unknown04;
   if(!(reinterpret_cast<volatile unsigned int *>(value)[1]&0x7FFFFF)) fn_80066E1C(value);
  }
  if(flags>0) fn_800A325C(object);
 }
 return object;
}
void fn_80114BDC(){
 fn_80066188((int)fn_80114C04);
}
void fn_80114C04(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563838,(int)fn_8011232C,(int)fn_80114C9C,(int)fn_80114C7C,(int)lbl_804956C8,36,(int)fn_80114A00,(int)fn_80114CA4,0,(int)lbl_804956BC);
}
void *fn_80114C7C(){return fn_801149C4();}
void *fn_80114C9C(){return lbl_80563784;}
}
#pragma pop
