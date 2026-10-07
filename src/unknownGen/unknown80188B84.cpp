#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800A325C(void *);
void *fn_80139228(void *);
void *fn_8018810C(void *,void *);
void *fn_801884A0(void *,void *,void *,void *);
extern void *lbl_8055FFF4;
void fn_80188D00(void *);
}
extern "C" {
void *fn_80188B84(int p0,int p1){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+0)=(void *)p1;
 if(!*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0)){
  return (void *)p0;
 }
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0))+4)=(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0))+4))+1);
 return (void *)p0;
}
void *fn_80188BA4(void *p0){
 void *value0;
 void *value1;
 void *value2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+0)=(void *)0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+0);
 if(value0){
  value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4)&0x7FFFFF)){
   fn_80066E1C(value0);
  }
 }
 value2=fn_80139228((void *)0);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+0)=value2;
 return p0;
}
void *fn_80188C0C(void *p0,int p1){
 void *value2;
 void *value0;
 void *value1;
 if((int)(int)p0!=0){
  value2=fn_8018810C(*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+0),lbl_8055FFF4);
  if(!value2){
   fn_80188D00(p0);
  }
  if((unsigned int)(int)p0!=0){
   value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+0);
   if(value0){
    value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
    *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+-1);
    if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4)&0x7FFFFF)){
     fn_80066E1C(value0);
    }
   }
  }
  if((int)(short)p1>0){
   fn_800A325C(p0);
  }
 }
 return p0;
}
int fn_80188CA4(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+0);}
void *fn_80188CAC(void *p0,void *p1){
 void *value0;
 void *value1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(p0)+0)=*reinterpret_cast<void **>(reinterpret_cast<char *>(p1)+0);
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+0);
 if(!value0){
  return p0;
 }
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>(value0)+4);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+4)=(reinterpret_cast<char *>(value1)+1);
 return value1;
}
void fn_80188CD0(int p0){
 void *local0;
 fn_801884A0(&local0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+0),lbl_8055FFF4,(void *)1);
}
void fn_80188D00(void *p0){
 void *local0;
 fn_801884A0(&local0,*reinterpret_cast<void **>(reinterpret_cast<char *>(p0)+0),lbl_8055FFF4,(void *)0);
}
}
#pragma pop
