////////////////////////////////////////////////////////////////////////////////
//
//  TYPHOON FRAMEWORK
//  Copyright 2013, Jasper Blues & Contributors
//  All Rights Reserved.
//
//  NOTICE: The authors permit you to use, modify, and distribute this file
//  in accordance with the terms of the license agreement accompanying it.
//
////////////////////////////////////////////////////////////////////////////////

#import <Foundation/Foundation.h>

@interface NSValue (InvocationConfigure)

- (void)setAsArgumentForInvocation:(NSInvocation*)invocation atIndex:(NSUInteger)index;

@end


/* Since NSNumber is subclass of NSValue, this category lives in same file */
@interface NSNumber (InvocationConfigure)

- (void)setAsArgumentForInvocation:(NSInvocation*)invocation atIndex:(NSUInteger)index;

@end
