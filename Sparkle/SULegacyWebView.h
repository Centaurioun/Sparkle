//
//  SULegacyWebView.h
//  Sparkle
//
//  Created by Mayur Pawashe on 12/30/20.
//  Copyright © 2020 Sparkle Project. All rights reserved.
//

#if SPARKLE_BUILD_UI_BITS && DOWNLOADER_XPC_SERVICE_EMBEDDED

#import <Foundation/Foundation.h>
#import "SUWebView.h"

NS_ASSUME_NONNULL_BEGIN

SPU_OBJC_DIRECT_MEMBERS @interface SULegacyWebView : NSObject <SUWebView>

- (instancetype)initWithColorStyleSheetLocation:(NSURL *)colorStyleSheetLocation fontFamily:(NSString *)fontFamily fontPointSize:(int)fontPointSize javaScriptEnabled:(BOOL)javaScriptEnabled;

@end

NS_ASSUME_NONNULL_END

#endif
