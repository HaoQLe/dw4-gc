#include "unknown8004B394.h"
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8004CDE4(Unknown8004CDE4 *object,const char *text){object->unknown0C.adopt(text);}
void fn_8004CE7C(Unknown8004CE7C *object,char stop){
 char c;
 do{c=object->slot84();}while(stop!=c && c!=-1);
}
void fn_8004CED8(Unknown8004CDE4 *object,int value){object->unknown14=value;}
unsigned char fn_8004CEE0(const char *path){
 if(!path) return 0;
 if(*path=='/' || *path=='\\') return 1;
 return strchr(path,':')!=NULL;
}
unsigned char fn_8004CF40(const char *path){
 if(!path) return 0;
 if(!strchr(path,'/') && !strchr(path,'\\')) return 0;
 return 1;
}
void fn_8004CFA4(const char *path){
 if(!path){
  Unknown8004CFA4String *string=static_cast<Unknown8004CFA4String *>(fn_8004CCE0()->value);
  delete string;
 }else fn_8004CCE0()->value->adopt(path);
}
void fn_8004D08C(Unknown8004D08C *object,int a,int b,void (*callback)(void *,void *),void *argument){
 callback(object->slot6C(a,1,b),argument);
}
void fn_8004D0E8(){
 void *table=reinterpret_cast<void **>(_arkCore__Q23Gap4Core)[0x38/4];
 const char *fallback=lbl_8055D87C;
 if(table){
  Unknown800442F8Reference reference(fn_80024FB4(fn_800607F4(lbl_805621F8)));
  fn_8006D674(table,2,lbl_8046957C,&reference,fallback,0);
  fn_8004CFA4(reinterpret_cast<Unknown800442F8Stream *>(reference.value)->unknown08.text());
 }
}
const char *fn_8004D198(){return fn_8004CCE0()->value->value;}
unsigned char fn_8004D1C0(const char **cursor,char *out,unsigned int size){
 const char *p=*cursor;
 *out=0;
 if(!p || !*p) return 0;
 const char *comma=strchr(p,',');
 unsigned int length;
 if(!comma){
  length=strlen(p);
  if(size-2<=length) return 0;
  strcpy(out,p);
  *cursor=NULL;
 }else{
  length=comma-p;
  if(size-2<=length) return 0;
  strncpy(out,p,length);
  out[length]=0;
  *cursor=comma+1;
 }
 if(strcmp(out,lbl_8055D768)==0) *out=0;
 else{
  char last=out[length-1];
  if(last!='/' && last!='\\') strcat(out,lbl_8055D870);
 }
 return 1;
}
const char *fn_8004D2F0(Unknown8004D2F0 *object,const char *text){
 object->unknown28.adopt(text);
 return text;
}
int fn_8004D38C(Unknown8004D2F0 *object){return (object->unknown34&0x3FFF)<<2;}
void fn_8004D398(Unknown8004D2F0 *object,void *a,int b){
 fn_8002FC18(object)->slotD0(a,b*object->unknown34);
}
int fn_8004D3F0(void *,void *a,const char *text){
 int value=0;
 sscanf(text,lbl_8055D880,a,&value);
 return value;
}
Unknown800442F8String fn_8004D430(void *,const float *value){
 char buffer[0x400];
 sprintf(buffer,lbl_8055D888,*value);
 return Unknown800442F8String(buffer);
}
int fn_8004D4B4(){return 4;}
void fn_8004D4BC(Unknown8004D4BC *object,float value){object->slot8C(&value);}
int fn_8004D4F0(){return 4;}
void fn_8004D4F8(Unknown8004D4BC *object,void *argument){
 object->unknown08.adopt(reinterpret_cast<Unknown800442F8Stream *>(object->slot5C(argument).value)->unknown08.text());
}
Unknown800442F8Reference fn_8004D5E8(Unknown8004D2F0 *object,const char *name){
 Unknown800442F8Reference reference(fn_80024FB4(fn_80068430(object)));
 fn_80072384(reference.value,lbl_8055D88C,*reinterpret_cast<const char **>(reinterpret_cast<char *>(object)+8),name);
 return reference;
}
int fn_8004D68C(Unknown8004D6DC *object,Unknown8004D6DCItem *item){
 unsigned int value=item->unknown04;
 if(object->unknownA8) fn_8002E4D8(object)->slotD0(&value,1);
 return value;
}
Unknown80042DECResult fn_8004D6DC(Unknown8004D6DC *object,const char *name,int mode){
 if(!name && !object->unknown68) return Unknown80042DECResult(kFailure__3Gap);
 if(!name && object->unknown68) return reinterpret_cast<Unknown8004D6DCFile *>(object->unknown68)->slot5C(mode);
 if(!object->unknown68 && name){
  unknown8004D6DCAssign(object->unknown68,reinterpret_cast<Unknown80042DECValue *>(fn_8002FFC8(object->unknown118)));
  if(!object->unknown68) return Unknown80042DECResult(kFailure__3Gap);
  fn_8004CDE4(reinterpret_cast<Unknown8004CDE4 *>(object->unknown68),name);
  return reinterpret_cast<Unknown8004D6DCFile *>(object->unknown68)->slot5C(mode);
 }
 reinterpret_cast<Unknown8004D6DCFile *>(object->unknown68)->slot60();
 unknown8004D6DCAssign(object->unknown68,reinterpret_cast<Unknown80042DECValue *>(fn_8002FFC8(object->unknown118)));
 fn_8004CDE4(reinterpret_cast<Unknown8004CDE4 *>(object->unknown68),name);
 return reinterpret_cast<Unknown8004D6DCFile *>(object->unknown68)->slot5C(mode);
}
void fn_8004D8D8(Unknown8004D6DC *object){
 if(object->unknown68){
  reinterpret_cast<Unknown8004D6DCFile *>(object->unknown68)->slot60();
  unknown80042DECRelease(object->unknown68);
  object->unknown68=NULL;
 }
}
void fn_8004D94C(Unknown8004D6DC *object){
 if(object->unknown14.value && strcmp(object->unknown14.value,lbl_8055D4C4)!=0) return;
 const char *name=reinterpret_cast<Unknown8004CDE4 *>(object->unknown68)->unknown0C.value;
 int i=strlen(name)-1;
 while(i>0 && name[i-1]!='/' && name[i-1]!='\\') --i;
 object->unknown14.adopt(name+i);
}
Unknown80042DECResult fn_8004DA3C(Unknown8004D6DC *object,const char *name){
 if(!object->unknown68 && !name) return Unknown80042DECResult(kFailure__3Gap);
 if(!object->unknown68){
  const Unknown80042DECResult &result=fn_8004D6DC(object,name,5);
  if(result.unknown00==kFailure__3Gap){
   if(name){unknown80042DECRelease(object->unknown68);object->unknown68=NULL;}
   return Unknown80042DECResult(kFailure__3Gap);
  }
  object->unknownC4=1;
 }
 if(!object->unknown68) return Unknown80042DECResult(kFailure__3Gap);
 fn_8004D94C(object);
 fn_8004CED8(reinterpret_cast<Unknown8004CDE4 *>(object->unknown68),5);
 return Unknown80042DECResult(kSuccess__3Gap);
}
}
#pragma pop
