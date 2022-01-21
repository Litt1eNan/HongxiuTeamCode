package TeamSchedule.service;

/**
 * 表示员工的三种状态
 */
public class Status {
    private final String NAME;

    private Status(String NAME){
        this.NAME = NAME;
    }

    public static final Status FREE = new Status("FREE");
    public static final Status BUSY = new Status("BUSY");
    public static final Status VOCATION = new Status("VOCATION");

    @Override
    public String toString() {
        return NAME;
    }
}
