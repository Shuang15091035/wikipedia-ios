//  Created by Monte Hurd on 1/15/14.

#import <UIKit/UIKit.h>

// Category for showing alerts from any view controller.

@interface UIViewController (Alert)

// Shows alert text just beneath the nav bar.
// Fades out alert if alertText set to zero length string.
-(void)showAlert:(NSString *)alertText;

// Shows full screen alert html just beneath the nav bar.
// Any links open in Safari.
-(void)showHTMLAlert: (NSString *)html
         bannerImage: (UIImage *)bannerImage
         bannerColor: (UIColor *)bannerColor;

@end
