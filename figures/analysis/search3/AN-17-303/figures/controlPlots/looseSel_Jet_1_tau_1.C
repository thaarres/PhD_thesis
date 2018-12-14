void looseSel_Jet_1_tau_1()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Sep  5 11:26:57 2018) by ROOT version6.02/05
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.16);
   c1->SetRightMargin(0.02);
   c1->SetTopMargin(0.05);
   c1->SetBottomMargin(0.13);
   c1->SetFrameFillStyle(0);
   c1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: c1_1
   TPad *c1_1 = new TPad("c1_1", "newpad1",0,0,1,0.2);
   c1_1->Draw();
   c1_1->cd();
   c1_1->Range(-0.1428571,-0.7000001,1.047619,1.8);
   c1_1->SetFillColor(0);
   c1_1->SetFillStyle(4000);
   c1_1->SetBorderMode(0);
   c1_1->SetBorderSize(2);
   c1_1->SetGridx();
   c1_1->SetGridy();
   c1_1->SetTickx(1);
   c1_1->SetTicky(1);
   c1_1->SetLeftMargin(0.12);
   c1_1->SetRightMargin(0.04);
   c1_1->SetTopMargin(0);
   c1_1->SetBottomMargin(0.36);
   c1_1->SetFrameFillStyle(4000);
   c1_1->SetFrameBorderMode(0);
   c1_1->SetFrameFillStyle(4000);
   c1_1->SetFrameBorderMode(0);
   
   TH1D *ratiohist9734137 = new TH1D("ratiohist9734137","",20,0,1);
   ratiohist9734137->SetBinContent(1,0.8719298);
   ratiohist9734137->SetBinContent(2,0.9565389);
   ratiohist9734137->SetBinContent(3,0.9780954);
   ratiohist9734137->SetBinContent(4,1.011422);
   ratiohist9734137->SetBinContent(5,1.019134);
   ratiohist9734137->SetBinContent(6,1.006888);
   ratiohist9734137->SetBinContent(7,1.017151);
   ratiohist9734137->SetBinContent(8,1.008897);
   ratiohist9734137->SetBinContent(9,1.023231);
   ratiohist9734137->SetBinContent(10,0.9571643);
   ratiohist9734137->SetBinContent(11,1.098135);
   ratiohist9734137->SetBinContent(12,0.8543428);
   ratiohist9734137->SetBinContent(13,3.105064);
   ratiohist9734137->SetBinError(1,0.02098673);
   ratiohist9734137->SetBinError(2,0.00373064);
   ratiohist9734137->SetBinError(3,0.004411127);
   ratiohist9734137->SetBinError(4,0.002829258);
   ratiohist9734137->SetBinError(5,0.003538049);
   ratiohist9734137->SetBinError(6,0.01271546);
   ratiohist9734137->SetBinError(7,0.006607779);
   ratiohist9734137->SetBinError(8,0.01001855);
   ratiohist9734137->SetBinError(9,0.01773673);
   ratiohist9734137->SetBinError(10,0.03582042);
   ratiohist9734137->SetBinError(11,0.1120668);
   ratiohist9734137->SetBinError(12,0.1727088);
   ratiohist9734137->SetBinError(13,1.927681);
   ratiohist9734137->SetMinimum(0.2);
   ratiohist9734137->SetMaximum(1.8);
   ratiohist9734137->SetEntries(59.09698);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff9900");
   ratiohist9734137->SetFillColor(ci);
   ratiohist9734137->SetLineWidth(2);
   ratiohist9734137->SetMarkerStyle(20);
   ratiohist9734137->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   ratiohist9734137->GetXaxis()->SetNdivisions(505);
   ratiohist9734137->GetXaxis()->SetLabelFont(42);
   ratiohist9734137->GetXaxis()->SetLabelSize(0.14);
   ratiohist9734137->GetXaxis()->SetTitleSize(0.17);
   ratiohist9734137->GetXaxis()->SetTitleOffset(0.98);
   ratiohist9734137->GetXaxis()->SetTitleFont(42);
   ratiohist9734137->GetYaxis()->SetTitle("Data/MC");
   ratiohist9734137->GetYaxis()->CenterTitle(true);
   ratiohist9734137->GetYaxis()->SetNdivisions(105);
   ratiohist9734137->GetYaxis()->SetLabelFont(42);
   ratiohist9734137->GetYaxis()->SetLabelSize(0.14);
   ratiohist9734137->GetYaxis()->SetTitleSize(0.16);
   ratiohist9734137->GetYaxis()->SetTitleOffset(0.2);
   ratiohist9734137->GetYaxis()->SetTitleFont(42);
   ratiohist9734137->GetZaxis()->SetLabelFont(42);
   ratiohist9734137->GetZaxis()->SetLabelSize(0.035);
   ratiohist9734137->GetZaxis()->SetTitleSize(0.035);
   ratiohist9734137->GetZaxis()->SetTitleFont(42);
   ratiohist9734137->Draw("");
   
   Double_t Graph0_fx1009[21] = {
   0,
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t Graph0_fy1009[21] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph0_fex1009[21] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t Graph0_fey1009[21] = {
   0.008603776,
   0.008603776,
   0.003136731,
   0.004318315,
   0.002492777,
   0.003131643,
   0.012493,
   0.006062855,
   0.009441257,
   0.01676021,
   0.03668585,
   0.1004105,
   0.1908449,
   0.4925022,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(21,Graph0_fx1009,Graph0_fy1009,Graph0_fex1009,Graph0_fey1009);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(3013);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","Graph",100,-0.1575,1.1325);
   Graph_Graph1009->SetMinimum(0.4089974);
   Graph_Graph1009->SetMaximum(1.591003);
   Graph_Graph1009->SetDirectory(0);
   Graph_Graph1009->SetStats(0);
   Graph_Graph1009->SetLineStyle(0);
   Graph_Graph1009->SetMarkerStyle(20);
   Graph_Graph1009->GetXaxis()->SetLabelFont(42);
   Graph_Graph1009->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1009->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1009->GetXaxis()->SetTitleFont(42);
   Graph_Graph1009->GetYaxis()->SetLabelFont(42);
   Graph_Graph1009->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1009->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1009->GetYaxis()->SetTitleFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1009);
   
   gre->Draw("3");
   
   TH1D *H_ratiohist8098138 = new TH1D("H_ratiohist8098138","",20,0,1);
   H_ratiohist8098138->SetBinContent(1,0.8480526);
   H_ratiohist8098138->SetBinContent(2,0.9096156);
   H_ratiohist8098138->SetBinContent(3,1.006068);
   H_ratiohist8098138->SetBinContent(4,1.009759);
   H_ratiohist8098138->SetBinContent(5,1.021713);
   H_ratiohist8098138->SetBinContent(6,0.9971434);
   H_ratiohist8098138->SetBinContent(7,0.9898991);
   H_ratiohist8098138->SetBinContent(8,0.9873015);
   H_ratiohist8098138->SetBinContent(9,1.048128);
   H_ratiohist8098138->SetBinContent(10,1.069813);
   H_ratiohist8098138->SetBinContent(11,1.069785);
   H_ratiohist8098138->SetBinContent(12,3.022205);
   H_ratiohist8098138->SetBinContent(13,10.06384);
   H_ratiohist8098138->SetBinError(1,0.04588984);
   H_ratiohist8098138->SetBinError(2,0.01108366);
   H_ratiohist8098138->SetBinError(3,0.006301635);
   H_ratiohist8098138->SetBinError(4,0.006680541);
   H_ratiohist8098138->SetBinError(5,0.008033484);
   H_ratiohist8098138->SetBinError(6,0.01031456);
   H_ratiohist8098138->SetBinError(7,0.01359272);
   H_ratiohist8098138->SetBinError(8,0.02218319);
   H_ratiohist8098138->SetBinError(9,0.03520685);
   H_ratiohist8098138->SetBinError(10,0.05905426);
   H_ratiohist8098138->SetBinError(11,0.1670808);
   H_ratiohist8098138->SetBinError(12,1.590072);
   H_ratiohist8098138->SetBinError(13,5.622439);
   H_ratiohist8098138->SetMinimum(0);
   H_ratiohist8098138->SetMaximum(1179264);
   H_ratiohist8098138->SetEntries(16.91485);

   ci = 958;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   H_ratiohist8098138->SetFillColor(ci);
   H_ratiohist8098138->SetLineStyle(9);
   H_ratiohist8098138->SetLineWidth(2);
   H_ratiohist8098138->SetMarkerStyle(20);
   H_ratiohist8098138->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   H_ratiohist8098138->GetXaxis()->SetLabelFont(42);
   H_ratiohist8098138->GetXaxis()->SetLabelSize(0);
   H_ratiohist8098138->GetXaxis()->SetTitleSize(0);
   H_ratiohist8098138->GetXaxis()->SetTitleFont(42);
   H_ratiohist8098138->GetYaxis()->SetTitle("Events");
   H_ratiohist8098138->GetYaxis()->SetLabelFont(42);
   H_ratiohist8098138->GetYaxis()->SetLabelSize(0.035);
   H_ratiohist8098138->GetYaxis()->SetTitleFont(42);
   H_ratiohist8098138->GetZaxis()->SetLabelFont(42);
   H_ratiohist8098138->GetZaxis()->SetLabelSize(0.035);
   H_ratiohist8098138->GetZaxis()->SetTitleSize(0.035);
   H_ratiohist8098138->GetZaxis()->SetTitleFont(42);
   H_ratiohist8098138->Draw("HISTsame");
   
   TH1D *MG_ratiohist6723139 = new TH1D("MG_ratiohist6723139","",20,0,1);
   MG_ratiohist6723139->SetBinContent(1,0.9565568);
   MG_ratiohist6723139->SetBinContent(2,1.089686);
   MG_ratiohist6723139->SetBinContent(3,0.9513588);
   MG_ratiohist6723139->SetBinContent(4,1.020384);
   MG_ratiohist6723139->SetBinContent(5,1.000277);
   MG_ratiohist6723139->SetBinContent(6,0.902255);
   MG_ratiohist6723139->SetBinContent(7,1.059689);
   MG_ratiohist6723139->SetBinContent(8,1.125906);
   MG_ratiohist6723139->SetBinContent(9,1.179537);
   MG_ratiohist6723139->SetBinContent(10,1.251212);
   MG_ratiohist6723139->SetBinContent(11,1.263504);
   MG_ratiohist6723139->SetBinContent(12,1.435682);
   MG_ratiohist6723139->SetBinContent(13,1.458983);
   MG_ratiohist6723139->SetBinError(1,0.02504223);
   MG_ratiohist6723139->SetBinError(2,0.004045337);
   MG_ratiohist6723139->SetBinError(3,0.0422978);
   MG_ratiohist6723139->SetBinError(4,0.002296342);
   MG_ratiohist6723139->SetBinError(5,0.002641282);
   MG_ratiohist6723139->SetBinError(6,0.05299785);
   MG_ratiohist6723139->SetBinError(7,0.004555533);
   MG_ratiohist6723139->SetBinError(8,0.006628169);
   MG_ratiohist6723139->SetBinError(9,0.01039083);
   MG_ratiohist6723139->SetBinError(10,0.01919511);
   MG_ratiohist6723139->SetBinError(11,0.05002581);
   MG_ratiohist6723139->SetBinError(12,0.2076449);
   MG_ratiohist6723139->SetBinError(13,1.043919);
   MG_ratiohist6723139->SetMinimum(0);
   MG_ratiohist6723139->SetMaximum(1179264);
   MG_ratiohist6723139->SetEntries(189.2286);

   ci = 959;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   MG_ratiohist6723139->SetFillColor(ci);
   MG_ratiohist6723139->SetLineStyle(2);
   MG_ratiohist6723139->SetLineWidth(2);
   MG_ratiohist6723139->SetMarkerStyle(20);
   MG_ratiohist6723139->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   MG_ratiohist6723139->GetXaxis()->SetLabelFont(42);
   MG_ratiohist6723139->GetXaxis()->SetLabelSize(0);
   MG_ratiohist6723139->GetXaxis()->SetTitleSize(0);
   MG_ratiohist6723139->GetXaxis()->SetTitleFont(42);
   MG_ratiohist6723139->GetYaxis()->SetTitle("Events");
   MG_ratiohist6723139->GetYaxis()->SetLabelFont(42);
   MG_ratiohist6723139->GetYaxis()->SetLabelSize(0.035);
   MG_ratiohist6723139->GetYaxis()->SetTitleFont(42);
   MG_ratiohist6723139->GetZaxis()->SetLabelFont(42);
   MG_ratiohist6723139->GetZaxis()->SetLabelSize(0.035);
   MG_ratiohist6723139->GetZaxis()->SetTitleSize(0.035);
   MG_ratiohist6723139->GetZaxis()->SetTitleFont(42);
   MG_ratiohist6723139->Draw("HISTsame");
   
   TH1D *ratiohist9734140 = new TH1D("ratiohist9734140","",20,0,1);
   ratiohist9734140->SetBinContent(1,0.8719298);
   ratiohist9734140->SetBinContent(2,0.9565389);
   ratiohist9734140->SetBinContent(3,0.9780954);
   ratiohist9734140->SetBinContent(4,1.011422);
   ratiohist9734140->SetBinContent(5,1.019134);
   ratiohist9734140->SetBinContent(6,1.006888);
   ratiohist9734140->SetBinContent(7,1.017151);
   ratiohist9734140->SetBinContent(8,1.008897);
   ratiohist9734140->SetBinContent(9,1.023231);
   ratiohist9734140->SetBinContent(10,0.9571643);
   ratiohist9734140->SetBinContent(11,1.098135);
   ratiohist9734140->SetBinContent(12,0.8543428);
   ratiohist9734140->SetBinContent(13,3.105064);
   ratiohist9734140->SetBinError(1,0.02098673);
   ratiohist9734140->SetBinError(2,0.00373064);
   ratiohist9734140->SetBinError(3,0.004411127);
   ratiohist9734140->SetBinError(4,0.002829258);
   ratiohist9734140->SetBinError(5,0.003538049);
   ratiohist9734140->SetBinError(6,0.01271546);
   ratiohist9734140->SetBinError(7,0.006607779);
   ratiohist9734140->SetBinError(8,0.01001855);
   ratiohist9734140->SetBinError(9,0.01773673);
   ratiohist9734140->SetBinError(10,0.03582042);
   ratiohist9734140->SetBinError(11,0.1120668);
   ratiohist9734140->SetBinError(12,0.1727088);
   ratiohist9734140->SetBinError(13,1.927681);
   ratiohist9734140->SetMinimum(0.2);
   ratiohist9734140->SetMaximum(1.8);
   ratiohist9734140->SetEntries(59.09698);

   ci = TColor::GetColor("#ff9900");
   ratiohist9734140->SetFillColor(ci);
   ratiohist9734140->SetLineWidth(2);
   ratiohist9734140->SetMarkerStyle(20);
   ratiohist9734140->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   ratiohist9734140->GetXaxis()->SetNdivisions(505);
   ratiohist9734140->GetXaxis()->SetLabelFont(42);
   ratiohist9734140->GetXaxis()->SetLabelSize(0.14);
   ratiohist9734140->GetXaxis()->SetTitleSize(0.17);
   ratiohist9734140->GetXaxis()->SetTitleOffset(0.98);
   ratiohist9734140->GetXaxis()->SetTitleFont(42);
   ratiohist9734140->GetYaxis()->SetTitle("Data/MC");
   ratiohist9734140->GetYaxis()->CenterTitle(true);
   ratiohist9734140->GetYaxis()->SetNdivisions(105);
   ratiohist9734140->GetYaxis()->SetLabelFont(42);
   ratiohist9734140->GetYaxis()->SetLabelSize(0.14);
   ratiohist9734140->GetYaxis()->SetTitleSize(0.16);
   ratiohist9734140->GetYaxis()->SetTitleOffset(0.2);
   ratiohist9734140->GetYaxis()->SetTitleFont(42);
   ratiohist9734140->GetZaxis()->SetLabelFont(42);
   ratiohist9734140->GetZaxis()->SetLabelSize(0.035);
   ratiohist9734140->GetZaxis()->SetTitleSize(0.035);
   ratiohist9734140->GetZaxis()->SetTitleFont(42);
   ratiohist9734140->Draw("same");
   c1_1->Modified();
   c1->cd();
  
// ------------>Primitives in pad: c1_2
   TPad *c1_2 = new TPad("c1_2", "newpad2",0,0.2,1,1);
   c1_2->Draw();
   c1_2->cd();
   c1_2->Range(-0.1428571,-17682.17,1.047619,1342484);
   c1_2->SetFillColor(0);
   c1_2->SetFillStyle(4000);
   c1_2->SetBorderMode(0);
   c1_2->SetBorderSize(2);
   c1_2->SetTickx(1);
   c1_2->SetTicky(1);
   c1_2->SetLeftMargin(0.12);
   c1_2->SetRightMargin(0.04);
   c1_2->SetTopMargin(0.12);
   c1_2->SetBottomMargin(0.013);
   c1_2->SetFrameFillStyle(0);
   c1_2->SetFrameBorderMode(0);
   c1_2->SetFrameFillStyle(0);
   c1_2->SetFrameBorderMode(0);
   
   TH1D *looseSel_Jet_1_tau_1hdata141 = new TH1D("looseSel_Jet_1_tau_1hdata141","",20,0,1);
   looseSel_Jet_1_tau_1hdata141->SetBinContent(1,1979);
   looseSel_Jet_1_tau_1hdata141->SetBinContent(2,186149);
   looseSel_Jet_1_tau_1hdata141->SetBinContent(3,591196);
   looseSel_Jet_1_tau_1hdata141->SetBinContent(4,620739);
   looseSel_Jet_1_tau_1hdata141->SetBinContent(5,445440);
   looseSel_Jet_1_tau_1hdata141->SetBinContent(6,293818);
   looseSel_Jet_1_tau_1hdata141->SetBinContent(7,183673);
   looseSel_Jet_1_tau_1hdata141->SetBinContent(8,105578);
   looseSel_Jet_1_tau_1hdata141->SetBinContent(9,51113);
   looseSel_Jet_1_tau_1hdata141->SetBinContent(10,18293);
   looseSel_Jet_1_tau_1hdata141->SetBinContent(11,3009);
   looseSel_Jet_1_tau_1hdata141->SetBinContent(12,225);
   looseSel_Jet_1_tau_1hdata141->SetBinContent(13,7);
   looseSel_Jet_1_tau_1hdata141->SetBinError(1,44.48595);
   looseSel_Jet_1_tau_1hdata141->SetBinError(2,431.4499);
   looseSel_Jet_1_tau_1hdata141->SetBinError(3,768.8927);
   looseSel_Jet_1_tau_1hdata141->SetBinError(4,787.8699);
   looseSel_Jet_1_tau_1hdata141->SetBinError(5,667.4129);
   looseSel_Jet_1_tau_1hdata141->SetBinError(6,542.0498);
   looseSel_Jet_1_tau_1hdata141->SetBinError(7,428.5709);
   looseSel_Jet_1_tau_1hdata141->SetBinError(8,324.9277);
   looseSel_Jet_1_tau_1hdata141->SetBinError(9,226.0818);
   looseSel_Jet_1_tau_1hdata141->SetBinError(10,135.2516);
   looseSel_Jet_1_tau_1hdata141->SetBinError(11,54.85435);
   looseSel_Jet_1_tau_1hdata141->SetBinError(12,15);
   looseSel_Jet_1_tau_1hdata141->SetBinError(13,2.645751);
   looseSel_Jet_1_tau_1hdata141->SetMinimum(0);
   looseSel_Jet_1_tau_1hdata141->SetMaximum(1179264);
   looseSel_Jet_1_tau_1hdata141->SetEntries(2501219);

   ci = TColor::GetColor("#ff9900");
   looseSel_Jet_1_tau_1hdata141->SetFillColor(ci);
   looseSel_Jet_1_tau_1hdata141->SetLineWidth(2);
   looseSel_Jet_1_tau_1hdata141->SetMarkerStyle(20);
   looseSel_Jet_1_tau_1hdata141->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   looseSel_Jet_1_tau_1hdata141->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hdata141->GetXaxis()->SetLabelSize(0);
   looseSel_Jet_1_tau_1hdata141->GetXaxis()->SetTitleSize(0);
   looseSel_Jet_1_tau_1hdata141->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hdata141->GetYaxis()->SetTitle("Events");
   looseSel_Jet_1_tau_1hdata141->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hdata141->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_1hdata141->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hdata141->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hdata141->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_1hdata141->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_1hdata141->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hdata141->Draw("EP");
   
   THStack *stack = new THStack();
   stack->SetName("stack");
   stack->SetTitle("ctack");
   
   TH1F *stack_stack_9 = new TH1F("stack_stack_9","ctack",20,0,1);
   stack_stack_9->SetMinimum(0);
   stack_stack_9->SetMaximum(644415.2);
   stack_stack_9->SetDirectory(0);
   stack_stack_9->SetStats(0);
   stack_stack_9->SetLineStyle(0);
   stack_stack_9->SetMarkerStyle(20);
   stack_stack_9->GetXaxis()->SetLabelFont(42);
   stack_stack_9->GetXaxis()->SetLabelOffset(0.007);
   stack_stack_9->GetXaxis()->SetTitleOffset(1.1);
   stack_stack_9->GetXaxis()->SetTitleFont(42);
   stack_stack_9->GetYaxis()->SetLabelFont(42);
   stack_stack_9->GetYaxis()->SetLabelOffset(0.007);
   stack_stack_9->GetYaxis()->SetTitleOffset(1.25);
   stack_stack_9->GetYaxis()->SetTitleFont(42);
   stack_stack_9->GetZaxis()->SetLabelFont(42);
   stack_stack_9->GetZaxis()->SetLabelOffset(0.007);
   stack_stack_9->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(stack_stack_9);
   
   
   TH1D *resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142 = new TH1D("resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142","",20,0,1);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->SetBinContent(1,5.336989);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->SetBinContent(2,856.7231);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->SetBinContent(3,3905.418);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->SetBinContent(4,6814.431);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->SetBinContent(5,8372.041);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->SetBinContent(6,8244.682);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->SetBinContent(7,6385.585);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->SetBinContent(8,3610.094);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->SetBinContent(9,1412.798);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->SetBinContent(10,415.9844);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->SetBinContent(11,85.35157);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->SetBinContent(12,11.02749);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->SetBinContent(13,0.468565);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->SetBinError(1,0.9489626);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->SetBinError(2,11.34685);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->SetBinError(3,24.32431);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->SetBinError(4,32.27976);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->SetBinError(5,35.54376);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->SetBinError(6,35.03793);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->SetBinError(7,30.74132);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->SetBinError(8,23.00353);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->SetBinError(9,14.32706);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->SetBinError(10,7.73961);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->SetBinError(11,3.47329);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->SetBinError(12,1.291269);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->SetBinError(13,0.2366388);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->SetEntries(377256);

   ci = TColor::GetColor("#cc3333");
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->SetFillColor(ci);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->SetLineWidth(2);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc142->GetZaxis()->SetTitleFont(42);
   stack->Add(resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc,"");
   
   TH1D *resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143 = new TH1D("resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143","",20,0,1);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->SetBinContent(1,41.31306);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->SetBinContent(2,2570.263);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->SetBinContent(3,6756.956);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->SetBinContent(4,5983.357);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->SetBinContent(5,3628.059);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->SetBinContent(6,2103.561);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->SetBinContent(7,1264.588);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->SetBinContent(8,691.8803);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->SetBinContent(9,307.351);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->SetBinContent(10,105.7796);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->SetBinContent(11,15.88964);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->SetBinContent(12,0.9079794);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->SetBinContent(13,0.2269948);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->SetBinError(1,2.252754);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->SetBinError(2,17.20695);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->SetBinError(3,27.87292);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->SetBinError(4,26.21467);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->SetBinError(5,20.39511);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->SetBinError(6,15.52353);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->SetBinError(7,12.04255);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->SetBinError(8,8.898247);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->SetBinError(9,5.938466);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->SetBinError(10,3.481037);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->SetBinError(11,1.346278);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->SetBinError(12,0.321822);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->SetBinError(13,0.160911);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->SetEntries(208226);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->SetFillColor(47);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->SetLineWidth(2);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc143->GetZaxis()->SetTitleFont(42);
   stack->Add(resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc,"");
   
   TH1D *resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144 = new TH1D("resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144","",20,0,1);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->SetBinContent(1,93.79004);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->SetBinContent(2,5593.801);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->SetBinContent(3,13336.28);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->SetBinContent(4,11298.75);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->SetBinContent(5,6913.508);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->SetBinContent(6,4258.954);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->SetBinContent(7,2574.057);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->SetBinContent(8,1429.744);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->SetBinContent(9,640.2832);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->SetBinContent(10,202.7194);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->SetBinContent(11,33.60194);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->SetBinContent(12,3.692521);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->SetBinError(1,4.236853);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->SetBinError(2,32.34856);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->SetBinError(3,49.89892);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->SetBinError(4,45.8846);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->SetBinError(5,35.88699);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->SetBinError(6,28.16985);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->SetBinError(7,21.89832);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->SetBinError(8,16.31714);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->SetBinError(9,10.93115);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->SetBinError(10,6.155386);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->SetBinError(11,2.496971);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->SetBinError(12,0.8277377);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->SetEntries(252534);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->SetFillColor(21);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->SetLineWidth(2);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc144->GetZaxis()->SetTitleFont(42);
   stack->Add(resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc,"");
   
   TH1D *looseSel_Jet_1_tau_1hqcd145 = new TH1D("looseSel_Jet_1_tau_1hqcd145","",20,0,1);
   looseSel_Jet_1_tau_1hqcd145->SetBinContent(1,2129.238);
   looseSel_Jet_1_tau_1hqcd145->SetBinContent(2,185586);
   looseSel_Jet_1_tau_1hqcd145->SetBinContent(3,580437.3);
   looseSel_Jet_1_tau_1hqcd145->SetBinContent(4,589632.2);
   looseSel_Jet_1_tau_1hqcd145->SetBinContent(5,418163.2);
   looseSel_Jet_1_tau_1hqcd145->SetBinContent(6,277201);
   looseSel_Jet_1_tau_1hqcd145->SetBinContent(7,170351.7);
   looseSel_Jet_1_tau_1hqcd145->SetBinContent(8,98915.28);
   looseSel_Jet_1_tau_1hqcd145->SetBinContent(9,47592.12);
   looseSel_Jet_1_tau_1hqcd145->SetBinContent(10,18387.18);
   looseSel_Jet_1_tau_1hqcd145->SetBinContent(11,2605.257);
   looseSel_Jet_1_tau_1hqcd145->SetBinContent(12,247.7323);
   looseSel_Jet_1_tau_1hqcd145->SetBinContent(13,1.558822);
   looseSel_Jet_1_tau_1hqcd145->SetBinError(1,18.90526);
   looseSel_Jet_1_tau_1hqcd145->SetBinError(2,609.223);
   looseSel_Jet_1_tau_1hqcd145->SetBinError(3,2609.405);
   looseSel_Jet_1_tau_1hqcd145->SetBinError(4,1528.635);
   looseSel_Jet_1_tau_1hqcd145->SetBinError(5,1367.684);
   looseSel_Jet_1_tau_1hqcd145->SetBinError(6,3645.248);
   looseSel_Jet_1_tau_1hqcd145->SetBinError(7,1094.089);
   looseSel_Jet_1_tau_1hqcd145->SetBinError(8,987.5564);
   looseSel_Jet_1_tau_1hqcd145->SetBinError(9,837.0003);
   looseSel_Jet_1_tau_1hqcd145->SetBinError(10,701.0491);
   looseSel_Jet_1_tau_1hqcd145->SetBinError(11,275.0983);
   looseSel_Jet_1_tau_1hqcd145->SetBinError(12,50.23654);
   looseSel_Jet_1_tau_1hqcd145->SetBinError(13,1.072776);
   looseSel_Jet_1_tau_1hqcd145->SetEntries(9443600);
   looseSel_Jet_1_tau_1hqcd145->SetFillColor(36);
   looseSel_Jet_1_tau_1hqcd145->SetLineWidth(2);
   looseSel_Jet_1_tau_1hqcd145->SetMarkerStyle(20);
   looseSel_Jet_1_tau_1hqcd145->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   looseSel_Jet_1_tau_1hqcd145->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hqcd145->GetXaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_1hqcd145->GetXaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_1hqcd145->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hqcd145->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_1_tau_1hqcd145->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hqcd145->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_1hqcd145->GetYaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_1hqcd145->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hqcd145->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hqcd145->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_1hqcd145->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_1hqcd145->GetZaxis()->SetTitleFont(42);
   stack->Add(looseSel_Jet_1_tau_1hqcd,"");
   stack->Draw("histsame");
   
   TH1D *resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146 = new TH1D("resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146","",20,0,1);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->SetBinContent(1,8521.148);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->SetBinContent(2,319023.1);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->SetBinContent(3,172959.7);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->SetBinContent(4,16311.89);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->SetBinContent(5,4305.55);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->SetBinContent(6,1881.088);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->SetBinContent(7,1071.716);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->SetBinContent(8,662.4512);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->SetBinContent(9,379.3185);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->SetBinContent(10,99.60754);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->SetBinContent(11,40.41827);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->SetBinError(1,178.9769);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->SetBinError(2,1095.474);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->SetBinError(3,806.7663);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->SetBinError(4,246.8221);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->SetBinError(5,127.1784);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->SetBinError(6,83.79708);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->SetBinError(7,63.62243);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->SetBinError(8,49.06828);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->SetBinError(9,37.95763);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->SetBinError(10,19.32265);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->SetBinError(11,12.81707);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->SetEntries(165768);

   ci = TColor::GetColor("#ff6600");
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->SetLineColor(ci);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->SetLineStyle(2);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->SetLineWidth(2);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->GetZaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig146->Draw("HISTCSAME");
   
   TH1D *resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147 = new TH1D("resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147","",20,0,1);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->SetBinContent(1,5099.639);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->SetBinContent(2,280853);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->SetBinContent(3,228339.2);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->SetBinContent(4,9815.522);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->SetBinContent(5,908.9);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->SetBinContent(6,143.1931);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->SetBinContent(7,21.80333);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->SetBinContent(8,62.73166);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->SetBinContent(10,12.07415);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->SetBinError(1,316.9406);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->SetBinError(2,2352.928);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->SetBinError(3,2127.789);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->SetBinError(4,439.9491);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->SetBinError(5,128.7275);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->SetBinError(6,50.42663);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->SetBinError(7,9.675917);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->SetBinError(8,31.53659);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->SetBinError(10,8.565827);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->SetEntries(34132);

   ci = TColor::GetColor("#990099");
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->SetLineColor(ci);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->SetLineWidth(2);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->GetZaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig147->Draw("HISTCSAME");
   
   TH1D *resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148 = new TH1D("resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148","",20,0,1);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->SetBinContent(1,3840.329);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->SetBinContent(2,243064.3);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->SetBinContent(3,250153.5);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->SetBinContent(4,23522.05);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->SetBinContent(5,2925.297);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->SetBinContent(6,857.0205);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->SetBinContent(7,382.4086);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->SetBinContent(8,226.2535);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->SetBinContent(9,97.49609);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->SetBinContent(10,157.7537);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->SetBinContent(11,29.58973);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->SetBinError(1,278.9094);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->SetBinError(2,2213.398);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->SetBinError(3,2238.24);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->SetBinError(4,688.4909);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->SetBinError(5,237.3364);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->SetBinError(6,135.5983);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->SetBinError(7,92.4441);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->SetBinError(8,63.6087);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->SetBinError(9,44.83992);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->SetBinError(10,56.55144);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->SetBinError(11,20.992);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->SetEntries(31816);

   ci = TColor::GetColor("#009900");
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->SetLineColor(ci);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->SetLineStyle(4);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->SetLineWidth(2);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->GetZaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig148->Draw("HISTCSAME");
   
   TH1D *looseSel_Jet_1_tau_1hherwig149 = new TH1D("looseSel_Jet_1_tau_1hherwig149","",20,0,1);
   looseSel_Jet_1_tau_1hherwig149->SetBinContent(1,2333.582);
   looseSel_Jet_1_tau_1hherwig149->SetBinContent(2,204645.8);
   looseSel_Jet_1_tau_1hherwig149->SetBinContent(3,587630.4);
   looseSel_Jet_1_tau_1hherwig149->SetBinContent(4,614739.6);
   looseSel_Jet_1_tau_1hherwig149->SetBinContent(5,435973.7);
   looseSel_Jet_1_tau_1hherwig149->SetBinContent(6,294659.7);
   looseSel_Jet_1_tau_1hherwig149->SetBinContent(7,185547.2);
   looseSel_Jet_1_tau_1hherwig149->SetBinContent(8,106935.9);
   looseSel_Jet_1_tau_1hherwig149->SetBinContent(9,48766);
   looseSel_Jet_1_tau_1hherwig149->SetBinContent(10,17099.25);
   looseSel_Jet_1_tau_1hherwig149->SetBinContent(11,2812.715);
   looseSel_Jet_1_tau_1hherwig149->SetBinContent(12,74.44895);
   looseSel_Jet_1_tau_1hherwig149->SetBinContent(13,0.6955599);
   looseSel_Jet_1_tau_1hherwig149->SetBinError(1,114.8636);
   looseSel_Jet_1_tau_1hherwig149->SetBinError(2,2448.081);
   looseSel_Jet_1_tau_1hherwig149->SetBinError(3,3600.48);
   looseSel_Jet_1_tau_1hherwig149->SetBinError(4,3991.556);
   looseSel_Jet_1_tau_1hherwig149->SetBinError(5,3365.141);
   looseSel_Jet_1_tau_1hherwig149->SetBinError(6,2999.127);
   looseSel_Jet_1_tau_1hherwig149->SetBinError(7,2510.773);
   looseSel_Jet_1_tau_1hherwig149->SetBinError(8,2380.045);
   looseSel_Jet_1_tau_1hherwig149->SetBinError(9,1623.797);
   looseSel_Jet_1_tau_1hherwig149->SetBinError(10,935.3827);
   looseSel_Jet_1_tau_1hherwig149->SetBinError(11,436.2917);
   looseSel_Jet_1_tau_1hherwig149->SetBinError(12,38.85407);
   looseSel_Jet_1_tau_1hherwig149->SetBinError(13,0.2861647);
   looseSel_Jet_1_tau_1hherwig149->SetEntries(1256427);

   ci = 956;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   looseSel_Jet_1_tau_1hherwig149->SetFillColor(ci);
   looseSel_Jet_1_tau_1hherwig149->SetLineStyle(9);
   looseSel_Jet_1_tau_1hherwig149->SetLineWidth(2);
   looseSel_Jet_1_tau_1hherwig149->SetMarkerStyle(20);
   looseSel_Jet_1_tau_1hherwig149->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   looseSel_Jet_1_tau_1hherwig149->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hherwig149->GetXaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_1hherwig149->GetXaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_1hherwig149->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hherwig149->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_1_tau_1hherwig149->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hherwig149->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_1hherwig149->GetYaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_1hherwig149->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hherwig149->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hherwig149->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_1hherwig149->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_1hherwig149->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hherwig149->Draw("HIST same");
   
   TH1D *looseSel_Jet_1_tau_1hmg150 = new TH1D("looseSel_Jet_1_tau_1hmg150","",20,0,1);
   looseSel_Jet_1_tau_1hmg150->SetBinContent(1,2068.879);
   looseSel_Jet_1_tau_1hmg150->SetBinContent(2,170828);
   looseSel_Jet_1_tau_1hmg150->SetBinContent(3,621422.8);
   looseSel_Jet_1_tau_1hmg150->SetBinContent(4,608338.9);
   looseSel_Jet_1_tau_1hmg150->SetBinContent(5,445316.7);
   looseSel_Jet_1_tau_1hmg150->SetBinContent(6,325648.5);
   looseSel_Jet_1_tau_1hmg150->SetBinContent(7,173327.3);
   looseSel_Jet_1_tau_1hmg150->SetBinContent(8,93771.58);
   looseSel_Jet_1_tau_1hmg150->SetBinContent(9,43333.09);
   looseSel_Jet_1_tau_1hmg150->SetBinContent(10,14620.22);
   looseSel_Jet_1_tau_1hmg150->SetBinContent(11,2381.472);
   looseSel_Jet_1_tau_1hmg150->SetBinContent(12,156.7199);
   looseSel_Jet_1_tau_1hmg150->SetBinContent(13,4.797862);
   looseSel_Jet_1_tau_1hmg150->SetBinError(1,27.7618);
   looseSel_Jet_1_tau_1hmg150->SetBinError(2,495.3946);
   looseSel_Jet_1_tau_1hmg150->SetBinError(3,27616.89);
   looseSel_Jet_1_tau_1hmg150->SetBinError(4,1130.534);
   looseSel_Jet_1_tau_1hmg150->SetBinError(5,968.2479);
   looseSel_Jet_1_tau_1hmg150->SetBinError(6,19118.94);
   looseSel_Jet_1_tau_1hmg150->SetBinError(7,625.8142);
   looseSel_Jet_1_tau_1hmg150->SetBinError(8,470.5864);
   looseSel_Jet_1_tau_1hmg150->SetBinError(9,330.124);
   looseSel_Jet_1_tau_1hmg150->SetBinError(10,196.5249);
   looseSel_Jet_1_tau_1hmg150->SetBinError(11,83.69994);
   looseSel_Jet_1_tau_1hmg150->SetBinError(12,20.11507);
   looseSel_Jet_1_tau_1hmg150->SetBinError(13,2.91487);
   looseSel_Jet_1_tau_1hmg150->SetEntries(3695211);

   ci = 957;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   looseSel_Jet_1_tau_1hmg150->SetFillColor(ci);
   looseSel_Jet_1_tau_1hmg150->SetLineStyle(2);
   looseSel_Jet_1_tau_1hmg150->SetLineWidth(2);
   looseSel_Jet_1_tau_1hmg150->SetMarkerStyle(20);
   looseSel_Jet_1_tau_1hmg150->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   looseSel_Jet_1_tau_1hmg150->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hmg150->GetXaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_1hmg150->GetXaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_1hmg150->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hmg150->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_1_tau_1hmg150->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hmg150->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_1hmg150->GetYaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_1hmg150->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hmg150->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hmg150->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_1hmg150->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_1hmg150->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hmg150->Draw("HIST same");
   
   TH1D *looseSel_Jet_1_tau_1hqcd151 = new TH1D("looseSel_Jet_1_tau_1hqcd151","",20,0,1);
   looseSel_Jet_1_tau_1hqcd151->SetBinContent(1,2269.678);
   looseSel_Jet_1_tau_1hqcd151->SetBinContent(2,194606.8);
   looseSel_Jet_1_tau_1hqcd151->SetBinContent(3,604435.9);
   looseSel_Jet_1_tau_1hqcd151->SetBinContent(4,613728.8);
   looseSel_Jet_1_tau_1hqcd151->SetBinContent(5,437076.8);
   looseSel_Jet_1_tau_1hqcd151->SetBinContent(6,291808.2);
   looseSel_Jet_1_tau_1hqcd151->SetBinContent(7,180575.9);
   looseSel_Jet_1_tau_1hqcd151->SetBinContent(8,104647);
   looseSel_Jet_1_tau_1hqcd151->SetBinContent(9,49952.55);
   looseSel_Jet_1_tau_1hqcd151->SetBinContent(10,19111.66);
   looseSel_Jet_1_tau_1hqcd151->SetBinContent(11,2740.101);
   looseSel_Jet_1_tau_1hqcd151->SetBinContent(12,263.3603);
   looseSel_Jet_1_tau_1hqcd151->SetBinContent(13,2.254382);
   looseSel_Jet_1_tau_1hqcd151->SetBinError(1,19.5278);
   looseSel_Jet_1_tau_1hqcd151->SetBinError(2,610.4293);
   looseSel_Jet_1_tau_1hqcd151->SetBinError(3,2610.145);
   looseSel_Jet_1_tau_1hqcd151->SetBinError(4,1529.889);
   looseSel_Jet_1_tau_1hqcd151->SetBinError(5,1368.769);
   looseSel_Jet_1_tau_1hqcd151->SetBinError(6,3645.558);
   looseSel_Jet_1_tau_1hqcd151->SetBinError(7,1094.806);
   looseSel_Jet_1_tau_1hqcd151->SetBinError(8,987.9991);
   looseSel_Jet_1_tau_1hqcd151->SetBinError(9,837.2153);
   looseSel_Jet_1_tau_1hqcd151->SetBinError(10,701.1275);
   looseSel_Jet_1_tau_1hqcd151->SetBinError(11,275.1348);
   looseSel_Jet_1_tau_1hqcd151->SetBinError(12,50.26098);
   looseSel_Jet_1_tau_1hqcd151->SetBinError(13,1.110288);
   looseSel_Jet_1_tau_1hqcd151->SetEntries(1.028162e+07);
   looseSel_Jet_1_tau_1hqcd151->SetDirectory(0);
   looseSel_Jet_1_tau_1hqcd151->SetFillColor(1);
   looseSel_Jet_1_tau_1hqcd151->SetFillStyle(3013);
   looseSel_Jet_1_tau_1hqcd151->SetLineWidth(2);
   looseSel_Jet_1_tau_1hqcd151->SetMarkerStyle(20);
   looseSel_Jet_1_tau_1hqcd151->SetMarkerSize(0);
   looseSel_Jet_1_tau_1hqcd151->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   looseSel_Jet_1_tau_1hqcd151->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hqcd151->GetXaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_1hqcd151->GetXaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_1hqcd151->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hqcd151->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_1_tau_1hqcd151->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hqcd151->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_1hqcd151->GetYaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_1hqcd151->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hqcd151->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hqcd151->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_1hqcd151->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_1hqcd151->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hqcd151->Draw("E2same");
   
   TH1D *looseSel_Jet_1_tau_1hdata152 = new TH1D("looseSel_Jet_1_tau_1hdata152","",20,0,1);
   looseSel_Jet_1_tau_1hdata152->SetBinContent(1,1979);
   looseSel_Jet_1_tau_1hdata152->SetBinContent(2,186149);
   looseSel_Jet_1_tau_1hdata152->SetBinContent(3,591196);
   looseSel_Jet_1_tau_1hdata152->SetBinContent(4,620739);
   looseSel_Jet_1_tau_1hdata152->SetBinContent(5,445440);
   looseSel_Jet_1_tau_1hdata152->SetBinContent(6,293818);
   looseSel_Jet_1_tau_1hdata152->SetBinContent(7,183673);
   looseSel_Jet_1_tau_1hdata152->SetBinContent(8,105578);
   looseSel_Jet_1_tau_1hdata152->SetBinContent(9,51113);
   looseSel_Jet_1_tau_1hdata152->SetBinContent(10,18293);
   looseSel_Jet_1_tau_1hdata152->SetBinContent(11,3009);
   looseSel_Jet_1_tau_1hdata152->SetBinContent(12,225);
   looseSel_Jet_1_tau_1hdata152->SetBinContent(13,7);
   looseSel_Jet_1_tau_1hdata152->SetBinError(1,44.48595);
   looseSel_Jet_1_tau_1hdata152->SetBinError(2,431.4499);
   looseSel_Jet_1_tau_1hdata152->SetBinError(3,768.8927);
   looseSel_Jet_1_tau_1hdata152->SetBinError(4,787.8699);
   looseSel_Jet_1_tau_1hdata152->SetBinError(5,667.4129);
   looseSel_Jet_1_tau_1hdata152->SetBinError(6,542.0498);
   looseSel_Jet_1_tau_1hdata152->SetBinError(7,428.5709);
   looseSel_Jet_1_tau_1hdata152->SetBinError(8,324.9277);
   looseSel_Jet_1_tau_1hdata152->SetBinError(9,226.0818);
   looseSel_Jet_1_tau_1hdata152->SetBinError(10,135.2516);
   looseSel_Jet_1_tau_1hdata152->SetBinError(11,54.85435);
   looseSel_Jet_1_tau_1hdata152->SetBinError(12,15);
   looseSel_Jet_1_tau_1hdata152->SetBinError(13,2.645751);
   looseSel_Jet_1_tau_1hdata152->SetMinimum(0);
   looseSel_Jet_1_tau_1hdata152->SetMaximum(1179264);
   looseSel_Jet_1_tau_1hdata152->SetEntries(2501219);

   ci = TColor::GetColor("#ff9900");
   looseSel_Jet_1_tau_1hdata152->SetFillColor(ci);
   looseSel_Jet_1_tau_1hdata152->SetLineWidth(2);
   looseSel_Jet_1_tau_1hdata152->SetMarkerStyle(20);
   looseSel_Jet_1_tau_1hdata152->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   looseSel_Jet_1_tau_1hdata152->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hdata152->GetXaxis()->SetLabelSize(0);
   looseSel_Jet_1_tau_1hdata152->GetXaxis()->SetTitleSize(0);
   looseSel_Jet_1_tau_1hdata152->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hdata152->GetYaxis()->SetTitle("Events");
   looseSel_Jet_1_tau_1hdata152->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hdata152->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_1hdata152->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hdata152->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hdata152->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_1hdata152->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_1hdata152->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hdata152->Draw("EPSAME");
   
   TLegend *leg = new TLegend(0.6084422,0.4798951,0.9174874,0.8295455,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("looseSel_Jet_1_tau_1hdata","Data","LEP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("looseSel_Jet_1_tau_1hqcd","QCD Pythia8","F");
   entry->SetFillColor(36);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("looseSel_Jet_1_tau_1hherwig","         Herwig++","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(9);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("looseSel_Jet_1_tau_1hmg","         MadGraph+Pythia8","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc","W+jets","F");
   entry->SetFillColor(21);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_1_tau_1_hmc","Z+jets","F");
   entry->SetFillColor(47);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_1_tau_1_hmc","t#bar{t}","F");

   ci = TColor::GetColor("#cc3333");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig","G#rightarrowWW","L");

   ci = TColor::GetColor("#ff6600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig","W'#rightarrowWZ","L");

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_1_tau_1_hsig","G#rightarrowZZ","L");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(4);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.96,0.904,"77.3 fb^{-1} (2016+2017)(13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.048);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1578,0.849655,"CMS");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(61);
   tex->SetTextSize(0.072);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1578,0.763255,"Preliminary");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.05472);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1D *looseSel_Jet_1_tau_1hdata_copy153 = new TH1D("looseSel_Jet_1_tau_1hdata_copy153","",20,0,1);
   looseSel_Jet_1_tau_1hdata_copy153->SetBinContent(1,1979);
   looseSel_Jet_1_tau_1hdata_copy153->SetBinContent(2,186149);
   looseSel_Jet_1_tau_1hdata_copy153->SetBinContent(3,591196);
   looseSel_Jet_1_tau_1hdata_copy153->SetBinContent(4,620739);
   looseSel_Jet_1_tau_1hdata_copy153->SetBinContent(5,445440);
   looseSel_Jet_1_tau_1hdata_copy153->SetBinContent(6,293818);
   looseSel_Jet_1_tau_1hdata_copy153->SetBinContent(7,183673);
   looseSel_Jet_1_tau_1hdata_copy153->SetBinContent(8,105578);
   looseSel_Jet_1_tau_1hdata_copy153->SetBinContent(9,51113);
   looseSel_Jet_1_tau_1hdata_copy153->SetBinContent(10,18293);
   looseSel_Jet_1_tau_1hdata_copy153->SetBinContent(11,3009);
   looseSel_Jet_1_tau_1hdata_copy153->SetBinContent(12,225);
   looseSel_Jet_1_tau_1hdata_copy153->SetBinContent(13,7);
   looseSel_Jet_1_tau_1hdata_copy153->SetBinError(1,44.48595);
   looseSel_Jet_1_tau_1hdata_copy153->SetBinError(2,431.4499);
   looseSel_Jet_1_tau_1hdata_copy153->SetBinError(3,768.8927);
   looseSel_Jet_1_tau_1hdata_copy153->SetBinError(4,787.8699);
   looseSel_Jet_1_tau_1hdata_copy153->SetBinError(5,667.4129);
   looseSel_Jet_1_tau_1hdata_copy153->SetBinError(6,542.0498);
   looseSel_Jet_1_tau_1hdata_copy153->SetBinError(7,428.5709);
   looseSel_Jet_1_tau_1hdata_copy153->SetBinError(8,324.9277);
   looseSel_Jet_1_tau_1hdata_copy153->SetBinError(9,226.0818);
   looseSel_Jet_1_tau_1hdata_copy153->SetBinError(10,135.2516);
   looseSel_Jet_1_tau_1hdata_copy153->SetBinError(11,54.85435);
   looseSel_Jet_1_tau_1hdata_copy153->SetBinError(12,15);
   looseSel_Jet_1_tau_1hdata_copy153->SetBinError(13,2.645751);
   looseSel_Jet_1_tau_1hdata_copy153->SetMinimum(0);
   looseSel_Jet_1_tau_1hdata_copy153->SetMaximum(1179264);
   looseSel_Jet_1_tau_1hdata_copy153->SetEntries(2501219);
   looseSel_Jet_1_tau_1hdata_copy153->SetDirectory(0);

   ci = TColor::GetColor("#ff9900");
   looseSel_Jet_1_tau_1hdata_copy153->SetFillColor(ci);
   looseSel_Jet_1_tau_1hdata_copy153->SetLineWidth(2);
   looseSel_Jet_1_tau_1hdata_copy153->SetMarkerStyle(20);
   looseSel_Jet_1_tau_1hdata_copy153->GetXaxis()->SetTitle("Jet 1 #tau_{1} ");
   looseSel_Jet_1_tau_1hdata_copy153->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hdata_copy153->GetXaxis()->SetLabelSize(0);
   looseSel_Jet_1_tau_1hdata_copy153->GetXaxis()->SetTitleSize(0);
   looseSel_Jet_1_tau_1hdata_copy153->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hdata_copy153->GetYaxis()->SetTitle("Events");
   looseSel_Jet_1_tau_1hdata_copy153->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hdata_copy153->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_1hdata_copy153->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hdata_copy153->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_1_tau_1hdata_copy153->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_1_tau_1hdata_copy153->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_1_tau_1hdata_copy153->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_1_tau_1hdata_copy153->Draw("sameaxis");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
