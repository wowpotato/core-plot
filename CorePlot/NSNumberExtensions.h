/** @category NSNumber(CPTExtensions)
 *  @brief Core Plot extensions to NSNumber.
 **/
#import <UIKit/UIKit.h>
@interface NSNumber(CPTExtensions)

+(nonnull instancetype)numberWithCGFloat:(CGFloat)number;

-(CGFloat)cgFloatValue;
-(nonnull instancetype)initWithCGFloat:(CGFloat)number;

-(nonnull NSDecimalNumber *)decimalNumber;

@end
