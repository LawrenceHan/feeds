
typedef enum {
    StatusItemIconNormal,
    StatusItemIconUnread,
    StatusItemIconInactive
} StatusItemIcon;

@interface StatusItemView : NSView

- (id)initWithStatusItem:(NSStatusItem *)statusItem;

- (void)toggleMenu;

@property (nonatomic, strong) NSStatusItem *statusItem;
@property (nonatomic, assign) StatusItemIcon icon;
@property (nonatomic, assign) BOOL highlighted;

@end
