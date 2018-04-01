/*
 * This file is part of the JPVideoPlayer package.
 * (c) NewPan <13246884282@163.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 *
 * Click https://github.com/Chris-Pan
 * or http://www.jianshu.com/users/e2f2d779c022/latest_articles to contact me.
 */

#import <UIKit/UIKit.h>

@interface JPVideoPlayerDemoCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIImageView *videoImv;

/** indexPath */
@property(nonatomic, strong)NSIndexPath *indexPath;

@end
