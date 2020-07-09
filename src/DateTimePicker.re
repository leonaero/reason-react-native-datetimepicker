[@bs.module "@react-native-community/datetimepicker"] [@react.component]
external make:
  (
    ~mode: [@bs.string] [ | `date | `time | `datetime | `countdown]=?,
    ~display: [@bs.string] [ | `default | `spinner | `calendar | `clock]=?,
    ~onChange: (ReactEvent.Touch.t, option(Js.Date.t)) => unit=?,
    ~value: Js.Date.t,
    ~maximumDate: Js.Date.t=?,
    ~minimumDate: Js.Date.t=?,
    ~timeZoneOffsetInMinutes: float=?,
    ~locale: string=?,
    ~is24Hour: bool=?,
    ~neutralButtonLabel: string=?,
    ~minuteInterval: float=?
  ) =>
  React.element =
  "default";
