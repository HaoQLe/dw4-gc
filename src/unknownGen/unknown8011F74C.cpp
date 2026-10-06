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
void fn_8011D8BC();
void fn_8011FAAC();
void *fn_80125430();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804989DC[];
extern char lbl_8049B85C[];
extern char lbl_8049B8B8[];
extern char lbl_8049B91C[];
extern char lbl_8055F390[8];
extern char lbl_8055F398[6];
extern void *lbl_805621F4;
extern void *lbl_80563968;
extern void *lbl_8056396C;
void *fn_8011F7A8();
void *fn_8011F7E4();
void fn_8011F854();
void fn_8011F87C();
void *fn_8011F8E8();
void *fn_8011F97C();
void *fn_8011F9B8();
void fn_8011F9F8();
void fn_8011FA20();
void *fn_8011FA8C();
}
struct UnknownGenObject8011F7E4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8011F9B8_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_8011F74C(){return fn_80125430();}
void *fn_8011F76C(){
 if(!lbl_80563968) lbl_80563968=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563968;
}
void *fn_8011F7A8(){
 if(!lbl_80563968 || !(reinterpret_cast<unsigned int *>(lbl_80563968)[0x24/4]&4)) fn_8011F854();
 return lbl_80563968;
}
void *fn_8011F7E4(){
 UnknownGenObject8011F7E4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_8049B91C;
 object.unknown00=lbl_8049B8B8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8011F854(){
 fn_80066188((int)fn_8011F87C);
}
void fn_8011F87C(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_80563968,(int)fn_8002907C,(int)fn_80024180,(int)fn_8011F8E8,(int)lbl_804989DC,20,(int)fn_8011F7E4,0,0,(int)lbl_8055F390);
}
void *fn_8011F8E8(){return fn_8011F7A8();}
void *fn_8011F908(void *object){
 fn_8011F9F8();
 return fn_8006546C(lbl_8056396C,object);
}
void *fn_8011F940(){
 if(!lbl_8056396C) lbl_8056396C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056396C;
}
void *fn_8011F97C(){
 if(!lbl_8056396C || !(reinterpret_cast<unsigned int *>(lbl_8056396C)[0x24/4]&4)) fn_8011F9F8();
 return lbl_8056396C;
}
void *fn_8011F9B8(){
 UnknownGenObject8011F9B8_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8049B85C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8011F9F8(){
 fn_80066188((int)fn_8011FA20);
}
void fn_8011FA20(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_8056396C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8011FA8C,(int)lbl_8055F398,36,(int)fn_8011F9B8,(int)fn_8011FAAC,0,0);
}
void *fn_8011FA8C(){return fn_8011F97C();}
}
#pragma pop
