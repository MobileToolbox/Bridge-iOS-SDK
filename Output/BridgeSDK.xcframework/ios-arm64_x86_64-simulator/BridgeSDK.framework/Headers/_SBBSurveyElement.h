//
//  _SBBSurveyElement.h
//
//	Copyright (c) 2014-2019 Sage Bionetworks
//	All rights reserved.
//
//	Redistribution and use in source and binary forms, with or without
//	modification, are permitted provided that the following conditions are met:
//	    * Redistributions of source code must retain the above copyright
//	      notice, this list of conditions and the following disclaimer.
//	    * Redistributions in binary form must reproduce the above copyright
//	      notice, this list of conditions and the following disclaimer in the
//	      documentation and/or other materials provided with the distribution.
//	    * Neither the name of Sage Bionetworks nor the names of BridgeSDk's
//		  contributors may be used to endorse or promote products derived from
//		  this software without specific prior written permission.
//
//	THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
//	ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
//	WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
//	DISCLAIMED. IN NO EVENT SHALL SAGE BIONETWORKS BE LIABLE FOR ANY
//	DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
//	(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
//	LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
//	ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
//	(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
//	SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to SBBSurveyElement.h instead.
//

#import <Foundation/Foundation.h>
#import <BridgeSDK/SBBBridgeObject.h>

NS_ASSUME_NONNULL_BEGIN

@class SBBSurveyRule;
@class SBBSurveyRule;

@protocol _SBBSurveyElement

@end

@interface _SBBSurveyElement : SBBBridgeObject

@property (nonatomic, strong) NSString* guid;

@property (nonatomic, strong) NSString* identifier;

@property (nonatomic, strong) NSString* prompt;

@property (nullable, nonatomic, strong) NSString* promptDetail;

@property (nullable, nonatomic, strong) NSString* title;

@property (nullable, nonatomic, strong, readonly) NSArray *afterRules;

@property (nullable, nonatomic, strong, readonly) NSArray *beforeRules;

- (void)addAfterRulesObject:(SBBSurveyRule*)value_ settingInverse: (BOOL) setInverse;
- (void)addAfterRulesObject:(SBBSurveyRule*)value_;
- (void)removeAfterRulesObjects;
- (void)removeAfterRulesObject:(SBBSurveyRule*)value_ settingInverse: (BOOL) setInverse;
- (void)removeAfterRulesObject:(SBBSurveyRule*)value_;

- (void)insertObject:(SBBSurveyRule*)value inAfterRulesAtIndex:(NSUInteger)idx;
- (void)removeObjectFromAfterRulesAtIndex:(NSUInteger)idx;
- (void)insertAfterRules:(NSArray *)value atIndexes:(NSIndexSet *)indexes;
- (void)removeAfterRulesAtIndexes:(NSIndexSet *)indexes;
- (void)replaceObjectInAfterRulesAtIndex:(NSUInteger)idx withObject:(SBBSurveyRule*)value;
- (void)replaceAfterRulesAtIndexes:(NSIndexSet *)indexes withAfterRules:(NSArray *)values;

- (void)addBeforeRulesObject:(SBBSurveyRule*)value_ settingInverse: (BOOL) setInverse;
- (void)addBeforeRulesObject:(SBBSurveyRule*)value_;
- (void)removeBeforeRulesObjects;
- (void)removeBeforeRulesObject:(SBBSurveyRule*)value_ settingInverse: (BOOL) setInverse;
- (void)removeBeforeRulesObject:(SBBSurveyRule*)value_;

- (void)insertObject:(SBBSurveyRule*)value inBeforeRulesAtIndex:(NSUInteger)idx;
- (void)removeObjectFromBeforeRulesAtIndex:(NSUInteger)idx;
- (void)insertBeforeRules:(NSArray *)value atIndexes:(NSIndexSet *)indexes;
- (void)removeBeforeRulesAtIndexes:(NSIndexSet *)indexes;
- (void)replaceObjectInBeforeRulesAtIndex:(NSUInteger)idx withObject:(SBBSurveyRule*)value;
- (void)replaceBeforeRulesAtIndexes:(NSIndexSet *)indexes withBeforeRules:(NSArray *)values;

@end
NS_ASSUME_NONNULL_END
