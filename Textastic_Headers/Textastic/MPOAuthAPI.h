/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MPOAuthAPIInternalClient.h"
#import <Foundation/NSObject.h>

@class NSURL, NSMutableArray, MPOAuthAuthenticationMethod;
@protocol MPOAuthCredentialStore, MPOAuthParameterFactory;

__attribute__((visibility("hidden")))
@interface MPOAuthAPI : NSObject <MPOAuthAPIInternalClient> {
	id<MPOAuthCredentialStore, MPOAuthParameterFactory> credentials_;
	NSURL* baseURL_;
	NSURL* authenticationURL_;
	MPOAuthAuthenticationMethod* authenticationMethod_;
	int signatureScheme_;
	NSMutableArray* activeLoaders_;
	int oauthAuthenticationState_;
}
@property(retain, nonatomic) NSMutableArray* activeLoaders;
@property(assign, nonatomic) int authenticationState;
@property(assign, nonatomic) int signatureScheme;
@property(retain, nonatomic) MPOAuthAuthenticationMethod* authenticationMethod;
@property(retain, nonatomic) NSURL* authenticationURL;
@property(retain, nonatomic) NSURL* baseURL;
@property(retain, nonatomic) id<MPOAuthCredentialStore, MPOAuthParameterFactory> credentials;
-(void)_performedLoad:(id)load receivingData:(id)data;
-(void)discardCredentials;
-(void)removeCredentialNamed:(id)named;
-(void)setCredential:(id)credential withName:(id)name;
-(id)credentialNamed:(id)named;
-(id)dataForURL:(id)url andMethod:(id)method withParameters:(id)parameters;
-(id)dataForMethod:(id)method withParameters:(id)parameters;
-(id)dataForMethod:(id)method;
-(void)performURLRequest:(id)request withTarget:(id)target andAction:(SEL)action;
-(void)performMethod:(id)method atURL:(id)url withParameters:(id)parameters withTarget:(id)target andAction:(SEL)action usingHTTPMethod:(id)method6;
-(void)performPOSTMethod:(id)method atURL:(id)url withParameters:(id)parameters withTarget:(id)target andAction:(SEL)action;
-(void)performMethod:(id)method atURL:(id)url withParameters:(id)parameters withTarget:(id)target andAction:(SEL)action;
-(void)performMethod:(id)method withTarget:(id)target andAction:(SEL)action;
-(BOOL)isAuthenticated;
-(void)authenticate;
-(oneway void)dealloc;
-(id)initWithCredentials:(id)credentials authenticationURL:(id)url andBaseURL:(id)url3 autoStart:(BOOL)start;
-(id)initWithCredentials:(id)credentials authenticationURL:(id)url andBaseURL:(id)url3;
-(id)initWithCredentials:(id)credentials andBaseURL:(id)url;
@end

