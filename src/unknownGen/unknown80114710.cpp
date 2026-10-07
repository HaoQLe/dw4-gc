#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024D1C();
void *fn_80029E64(void *);
void *fn_80033638();
void fn_80033A14();
void fn_80037938();
void *fn_80053998(void *,void *);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
void fn_8006588C(void *,void *,void *);
void *fn_800658E4(void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800A325C(void *);
void *fn_800AF168();
void fn_8010CBD4();
void *fn_8010D6A0();
void fn_80111654();
void *fn_80111B38();
void fn_8011232C();
void fn_80115248(void *);
extern char lbl_80471914[];
extern char lbl_80472FA0[];
extern char lbl_80474018[];
extern char lbl_8047650C[];
extern char lbl_804956A4[];
extern char lbl_804956BC[];
extern char lbl_804956C8[];
extern char lbl_804956FC[];
extern char lbl_80495710[];
extern char lbl_80496040[];
extern char lbl_804969FC[];
extern char lbl_80496D74[];
extern char lbl_80496E68[];
extern char lbl_80496EC8[];
extern char lbl_80496F28[];
extern char lbl_80497DC0[];
extern char lbl_80497E78[];
extern char lbl_8055F224[8];
extern char lbl_8055F22C[4];
extern char lbl_8055F230[4];
extern char lbl_8055F234[4];
extern char lbl_8055F238[4];
extern char lbl_8055F23C[8];
extern char lbl_8055F244[8];
extern char lbl_8055F24C[8];
extern char lbl_8055F254[8];
extern char lbl_8055F25C[6];
extern char lbl_8055F264[8];
extern void *lbl_805621F4;
extern void *lbl_80563784;
extern void *lbl_80563830;
extern void *lbl_80563838;
extern void *lbl_80563844;
extern char lbl_80563848[4];
extern void *lbl_8056384C;
extern void *lbl_80563850;
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
void fn_80114CA4();
void *fn_80114D4C();
void *fn_80114D88();
void *fn_80114DC4();
void fn_80114E1C();
void fn_80114E44();
void *fn_80114EB4();
void fn_80114ED4();
void *fn_80114F90();
void *fn_80114FCC();
void fn_801150A0();
void fn_801150C8();
void *fn_80115134();
void *fn_801151EC();
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
struct UnknownGenObject80114DC4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80114FCC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80114FCC(){fn_800638E0(this);}
};
struct UnknownGenObject80114FCC_0 : UnknownGenRoot80114FCC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80114FCC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80114FCC_1 : UnknownGenObject80114FCC_0 {
 char unknown10[36];
 UnknownGenRefMember unknown34;
 inline ~UnknownGenObject80114FCC_1(){unknown00=lbl_80474018;}
};
struct UnknownGenObject80114FCC : UnknownGenObject80114FCC_1 {
 char unknown38[8];
 inline ~UnknownGenObject80114FCC(){unknown00=lbl_80496D74;}
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
void fn_80114CA4(){
 void *value0=lbl_80563838;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F23C,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80114D4C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_800AF168();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 fn_800659C0(value0,lbl_8055F244,lbl_8055F24C,lbl_8055F254,value1);
}
void *fn_80114D4C(){
 if(!lbl_80563844) lbl_80563844=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563844;
}
void *fn_80114D88(){
 if(!lbl_80563844 || !(reinterpret_cast<unsigned int *>(lbl_80563844)[0x24/4]&4)) fn_80114E1C();
 return lbl_80563844;
}
void *fn_80114DC4(){
 UnknownGenObject80114DC4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80496EC8;
 object.unknown00=lbl_80496E68;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80114E1C(){
 fn_80066188((int)fn_80114E44);
}
void fn_80114E44(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563844,(int)fn_80033A14,(int)fn_80024D1C,(int)fn_80114EB4,(int)lbl_804956FC,20,(int)fn_80114DC4,(int)fn_80114ED4,0,0);
}
void *fn_80114EB4(){return fn_80114D88();}
void fn_80114ED4(){
 void *meta=lbl_80563844;
 UnknownGenField *field=reinterpret_cast<UnknownGenField *>(fn_800658F8(meta,lbl_8055F25C));
 void *type=fn_80053998(reinterpret_cast<void **>(meta)[0x28/4],field);
 field=reinterpret_cast<UnknownGenFactory *>(field)->slot54(1);
 field->unknown3C=fn_801151EC();
 field->unknown38=0;
 field->unknown1C=lbl_80563848;
 fn_8006588C(meta,type,field);
 unknownGenDrop(reinterpret_cast<UnknownGenValue *>(field));
}
void *fn_80114F90(){
 if(!lbl_8056384C || !(reinterpret_cast<unsigned int *>(lbl_8056384C)[0x24/4]&4)) fn_801150A0();
 return lbl_8056384C;
}
void *fn_80114FCC(){
 UnknownGenObject80114FCC object;
 object.unknown00=lbl_80474018;
 object.unknown34.value=0;
 object.unknown00=lbl_80496D74;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801150A0(){
 fn_80066188((int)fn_801150C8);
}
void fn_801150C8(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_8056384C,(int)fn_80037938,(int)fn_80033638,(int)fn_80115134,(int)lbl_80495710,56,(int)fn_80114FCC,0,0,(int)lbl_8055F264);
}
void *fn_80115134(){return fn_80114F90();}
void fn_80115154(){
 if(!lbl_80563850){
  void *object=(lbl_80563850=fn_8006546C(lbl_8056384C,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80563850));
   reinterpret_cast<short *>(lbl_80563850)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80563850);
  }
 }
}
void *fn_801151EC(){
 if(!lbl_80563850){
  fn_801150A0();
 }
 return lbl_80563850;
}
int fn_8011521C(){return 40;}
void fn_80115224(int p0){
 fn_80115248(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+52));
}
}
#pragma pop
