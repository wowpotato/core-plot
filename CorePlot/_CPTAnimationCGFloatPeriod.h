#import "CPTAnimationPeriod.h"

@interface _CPTAnimationCGFloatPeriod : CPTAnimationPeriod

-(void)setStartValueFromObject:(nonnull id)boundObject propertyGetter:(nonnull SEL)boundGetter;
-(BOOL)canStartWithValueFromObject:(nonnull id)boundObject propertyGetter:(nonnull SEL)boundGetter;
-(nonnull NSValue *)tweenedValueForProgress:(CGFloat)progress;

@end
