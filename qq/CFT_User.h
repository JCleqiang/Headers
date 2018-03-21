//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/BaseSingleton.h>

@class NSDictionary, NSMutableDictionary, NSString, NSTimer;

@interface CFT_User : BaseSingleton
{
    NSTimer *sessionTimer;
    NSString *_localLogOpen;
    _Bool _isTrueName;
    int _trans_seq;
    NSMutableDictionary *_qq_uniconf;
    NSMutableDictionary *_testDomainDict;
    NSString *_salt;
    NSMutableDictionary *_option_overload;
    NSDictionary *_interf_cache_ver;
    NSString *_skey;
    NSString *_skey_type;
    NSString *_sQQkey;
    NSString *_sQQkey_type;
    NSString *_pskey;
    long long _skey_begintime;
    long long _skey_endtime;
    NSString *_uin;
    NSString *_nickName;
    NSString *_realName;
    NSString *_creditcardId;
    NSString *_user_attr;
    NSString *_authen_account_type;
    NSString *_authen_channel_state;
    NSString *_pass_flag;
    NSString *_touchid_flag;
    NSString *_touchPay_certId;
    NSString *_cardType;
    NSString *_balance;
    NSString *_if_open_charge;
    NSString *_charge_limit;
    NSString *_freeze;
    NSString *_balanceAdvString;
    NSString *_balanceAdvUrl;
    NSString *_guide_text;
    NSString *_guide_link;
    NSMutableDictionary *_user_info_extend;
    NSString *_pwd_encrypt_type;
    NSString *_params_encrypt_type;
}

@property(retain, nonatomic) NSString *params_encrypt_type; // @synthesize params_encrypt_type=_params_encrypt_type;
@property(retain, nonatomic) NSString *pwd_encrypt_type; // @synthesize pwd_encrypt_type=_pwd_encrypt_type;
@property(retain, nonatomic) NSMutableDictionary *user_info_extend; // @synthesize user_info_extend=_user_info_extend;
@property(retain, nonatomic) NSString *guide_link; // @synthesize guide_link=_guide_link;
@property(retain, nonatomic) NSString *guide_text; // @synthesize guide_text=_guide_text;
@property(retain, nonatomic) NSString *balanceAdvUrl; // @synthesize balanceAdvUrl=_balanceAdvUrl;
@property(retain, nonatomic) NSString *balanceAdvString; // @synthesize balanceAdvString=_balanceAdvString;
@property(retain, nonatomic) NSString *freeze; // @synthesize freeze=_freeze;
@property(retain, nonatomic) NSString *charge_limit; // @synthesize charge_limit=_charge_limit;
@property(retain, nonatomic) NSString *if_open_charge; // @synthesize if_open_charge=_if_open_charge;
@property(retain, nonatomic) NSString *balance; // @synthesize balance=_balance;
@property(retain, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
@property(retain, nonatomic) NSString *touchPay_certId; // @synthesize touchPay_certId=_touchPay_certId;
@property(retain, nonatomic) NSString *touchid_flag; // @synthesize touchid_flag=_touchid_flag;
@property(retain, nonatomic) NSString *pass_flag; // @synthesize pass_flag=_pass_flag;
@property(retain, nonatomic) NSString *authen_channel_state; // @synthesize authen_channel_state=_authen_channel_state;
@property(retain, nonatomic) NSString *authen_account_type; // @synthesize authen_account_type=_authen_account_type;
@property(retain, nonatomic) NSString *user_attr; // @synthesize user_attr=_user_attr;
@property(nonatomic) _Bool isTrueName; // @synthesize isTrueName=_isTrueName;
@property(retain, nonatomic) NSString *creditcardId; // @synthesize creditcardId=_creditcardId;
@property(retain, nonatomic) NSString *realName; // @synthesize realName=_realName;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
@property(nonatomic) long long skey_endtime; // @synthesize skey_endtime=_skey_endtime;
@property(nonatomic) long long skey_begintime; // @synthesize skey_begintime=_skey_begintime;
@property(copy, nonatomic) NSString *pskey; // @synthesize pskey=_pskey;
@property(retain, nonatomic) NSString *sQQkey_type; // @synthesize sQQkey_type=_sQQkey_type;
@property(retain, nonatomic) NSString *sQQkey; // @synthesize sQQkey=_sQQkey;
@property(retain, nonatomic) NSString *skey_type; // @synthesize skey_type=_skey_type;
@property(retain, nonatomic) NSString *skey; // @synthesize skey=_skey;
@property(retain, nonatomic) NSDictionary *interf_cache_ver; // @synthesize interf_cache_ver=_interf_cache_ver;
@property(retain, nonatomic) NSMutableDictionary *option_overload; // @synthesize option_overload=_option_overload;
@property(nonatomic) int trans_seq; // @synthesize trans_seq=_trans_seq;
@property(retain, nonatomic) NSString *salt; // @synthesize salt=_salt;
@property(retain, nonatomic) NSMutableDictionary *testDomainDict; // @synthesize testDomainDict=_testDomainDict;
@property(retain, nonatomic) NSMutableDictionary *qq_uniconf; // @synthesize qq_uniconf=_qq_uniconf;
@property(retain, nonatomic) NSString *localLogOpen; // @synthesize localLogOpen=_localLogOpen;
- (_Bool)isTrueNameBy:(int)arg1;
- (void)setSkeyInvalid;
- (_Bool)isSkeyValid;
- (void)setSkeyExpiretime:(int)arg1;
- (void)updateSkeyWith:(id)arg1;
- (void)dealloc;
- (void)setTestDomainDict:(id)arg1 forUin:(id)arg2;
- (void)setLocalLogStatus:(id)arg1 forUin:(id)arg2;
- (void)setInterfCacheVer:(id)arg1;
- (void)reset;
- (_Bool)swithTo:(id)arg1;
- (id)init;

@end
