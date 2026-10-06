#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800A325C(void *);
void fn_8010CBD4();
void *fn_8010D6A0();
void fn_80111654();
void *fn_80111B38();
void fn_8011232C();
void fn_80114CA4();
extern char lbl_8047650C[];
extern char lbl_804956A4[];
extern char lbl_804956BC[];
extern char lbl_804956C8[];
extern char lbl_80496040[];
extern char lbl_804969FC[];
extern char lbl_80496F28[];
extern char lbl_80497DC0[];
extern char lbl_80497E78[];
extern char lbl_8055F224[8];
extern char lbl_8055F22C[4];
extern char lbl_8055F230[4];
extern char lbl_8055F234[4];
extern char lbl_8055F238[4];
extern void *lbl_805621F4;
extern void *lbl_80563784;
extern void *lbl_80563830;
extern void *lbl_80563838;
void *fn_80114710();
void *fn_8011474C();
void fn_80114844();
void fn_8011486C();
void *fn_801148E0();
void fn_80114900();
void *fn_801149C4();
void *fn_80114A00();
void fn_80114BDC();
void fn_80114C04();
void *fn_80114C7C();
void *fn_80114C9C();
}
struct UnknownGenRoot8011474C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011474C(){fn_8006665C(this);}
};
struct UnknownGenObject8011474C_0 : UnknownGenRoot8011474C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8011474C_0(){unknown00=lbl_80496040;}
};
struct UnknownGenObject8011474C_1 : UnknownGenObject8011474C_0 {
 inline ~UnknownGenObject8011474C_1(){unknown00=lbl_80497E78;}
};
struct UnknownGenObject8011474C : UnknownGenObject8011474C_1 {
 char unknown0C[24];
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject8011474C(){unknown00=lbl_80497DC0;}
};
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
void *fn_80114710(){
 if(!lbl_80563830 || !(reinterpret_cast<unsigned int *>(lbl_80563830)[0x24/4]&4)) fn_80114844();
 return lbl_80563830;
}
void *fn_8011474C(){
 UnknownGenObject8011474C object;
 object.unknown00=lbl_80496040;
 object.unknown08.value=0;
 object.unknown00=lbl_80497E78;
 object.unknown00=lbl_80497DC0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80114844(){
 fn_80066188((int)fn_8011486C);
}
void fn_8011486C(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563830,(int)fn_80111654,(int)fn_8010D6A0,(int)fn_801148E0,(int)lbl_804956A4,40,(int)fn_8011474C,(int)fn_80114900,0,(int)lbl_8055F224);
}
void *fn_801148E0(){return fn_80114710();}
void fn_80114900(){
 void *value0=lbl_80563830;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F22C,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80111B38();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_8055F230,lbl_8055F234,lbl_8055F238,value1);
}
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
