//
//  FRMailAddress.h
//  FrontierMail
//
//  Created by Kou on 11/07/26.
//  Copyright 2011 The Frontier Project. All rights reserved.
//
#ifndef H_FR_MAIL_ADDRESS___
#define H_FR_MAIL_ADDRESS___


#import <Foundation/Foundation.h>


/**
 * メールアドレス情報。
 *
 * @author Kou
 */
@interface FRMailAddress : NSObject {

@private
    
    NSString*       mName;          ///< 名前
    NSString*       mAddress;       ///< メールアドレス
    
}

/**
 * 名前
 */
@property (copy, nonatomic, readwrite) NSString* name;

/**
 * メールアドレス
 */
@property (copy, nonatomic, readwrite) NSString* address;




/**
 * 名前とアドレスを指定して初期化する。
 *
 * @param name      名前
 * @param address   メールアドレス
 * @return 作成したインスタンス
 */
- (FRMailAddress*)initWithName:(NSString*)name 
                       address:(NSString*)address;


/**
 * 名前とアドレスを指定して一時インスタンスとして初期化する。
 *
 * @param name      名前
 * @param address   メールアドレス
 * @return 作成した一時インスタンス
 */
+ (FRMailAddress*)mailAddressWithName:(NSString*)name 
                              address:(NSString*)address;


@end


#endif